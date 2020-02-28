https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

void zigZagTraversal(Node* root)
{

if (root == NULL) return ;

stack <Node *> s1;
stack <Node *> s2;

s1.push(root);

while(s1.empty() == false || s2.empty() == false){
    
    while(s1.empty() == false){
        
        Node * root_s1 = s1.top();
        s1.pop();
        
        cout << root_s1->data<< " ";
        
        if(root_s1->left)  s2.push(root_s1->left);
        if(root_s1->right) s2.push(root_s1->right); }
         
    
     while(s2.empty() == false){
        
        Node * root_s2 = s2.top();
        s2.pop();
        
        cout << root_s2->data<< " ";
       
         if(root_s2->right) s1.push(root_s2->right);
         if(root_s2->left)  s1.push(root_s2->left); }
  
    }

}
