https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

int height(Node* root, int& ans) 
{ 
    if (root == NULL) 
        return 0; 
  
    int left_height = height(root->left, ans); 
  
    int right_height = height(root->right, ans); 
  
    
    ans = max(ans, 1 + left_height + right_height); 
  
    return 1 + max(left_height, right_height); 
} 
  

int diameter(Node* node){

int ans =0;

int h = height(node, ans);
   return ans; 
}
_______
