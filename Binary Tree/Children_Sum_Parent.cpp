/*This is a function problem. You need to only complete the given function isSumProperty() that returns 0 or 1. 
The printing is done by the driver code.*/


int isSumProperty(Node *root)
{

 if(root == NULL) return 1;
 
 if(!root->left && !root->right) return 1;
 
 
 
 int sum =0;
 if(root->left) {sum +=root->left->data;}
 if(root->right){sum+=root->right->data;}
 
 return ((root->data == sum)&& isSumProperty(root->left) && isSumProperty(root->right));


}
