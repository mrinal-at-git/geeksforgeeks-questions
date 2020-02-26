https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1


void left(Node *root, int level,int *maxlevel){
    
    
    if (root == NULL) return ;
    
    if(*maxlevel < level){
        
        cout << root->data << " ";
        *maxlevel = level;
    }
    
    left(root->left,  level+1, maxlevel);
    left(root->right, level+1, maxlevel);
    
    
}


void leftView(Node *root)
{
   
   int maxlevel = 0;
   left(root, 1, &maxlevel);
   
   
 }
