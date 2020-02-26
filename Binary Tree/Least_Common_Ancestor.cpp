https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

Node* lca(Node* root ,int n1 ,int n2 )
{
    Node *lca1, *lca2;
   if (root == NULL) return NULL;
   
   if(root->data == n1|| root->data == n2) return root;
   
    lca1 = lca(root->left ,n1,n2);
    lca2 = lca(root->right ,n1,n2);
    
    
   if(lca1  && lca2 ) return root;
   
   if(lca1) return lca1;
   
   else return lca2;
   
 
}
