https://practice.geeksforgeeks.org/problems/mirror-tree/1

void mirror(Node* root) 
{
     
     if(root == NULL) return;
     
     
     mirror(root->left);
     mirror(root->right);
     
     
     Node* temp;
     temp = root->right;
     root->right = root->left;
     root->left = temp; 

}
