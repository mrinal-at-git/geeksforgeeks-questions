https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1


void right(Node *root, int level,int *maxlevel){
    
    
    if (root == NULL) return ;
    
    if(*maxlevel < level){
        
        cout << root->data << " ";
        *maxlevel = level;
    }
    
    right(root->right,  level+1, maxlevel);
    right(root->left, level+1, maxlevel);
    
    
}


void rightView(Node *root)
{
   int maxlevel = 0;
   right(root, 1, &maxlevel);
}
