https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1


int getMaxWidth(Node* root)
{
    
int res =0;
if (root == NULL) return 0;
  
  queue<Node *> q;
  q.push(root);
  
  while(!q.empty()){
      
      int count = q.size();
      
      res =max(res, count);
    
    for(int i=0;i<count;i++){  
      
      Node* temp = q.front();
      q.pop();
     
      
      if(temp->left)  q.push(temp->left);
      if(temp->right) q.push(temp->right);
      } 
  }
  
  return res;

}

