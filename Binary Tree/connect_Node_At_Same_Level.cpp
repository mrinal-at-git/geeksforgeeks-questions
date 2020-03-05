https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1


void connect(Node *root)
{
    if (root == NULL) return;
  
  queue<Node *> q;
  q.push(root);
  Node * prev;
  
  while(!q.empty()){
      
      int count  = q.size();
      
      for(int i=0;i<count;i++){
      
      Node* curr = q.front();
      q.pop();
    
    if(i !=0)  
         prev->nextRight = curr;
      
      
      if(curr->left)  q.push(curr->left);
      if(curr->right) q.push(curr->right);
      
      
      prev =curr;
      }  
      
      prev->nextRight=NULL;
      
   }
}
