https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1


void reversePrint(Node *root)
{
     if (root == NULL) return;
  
  queue<Node *> q;
  stack<Node *> s;
  q.push(root);
  
  while(!q.empty()){
      
      Node* temp = q.front();
      q.pop();
      s.push(temp);
      
      
      
      if(temp->right) q.push(temp->right);
      if(temp->left)  q.push(temp->left);
      
      
      
   }
   
   
   while(s.empty() == false){
       Node * root = s.top();
       cout << root->data << " ";
       s.pop();
       
   }
   
   
}
