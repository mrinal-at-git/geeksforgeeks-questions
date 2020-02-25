https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1


void levelOrder(Node* root)
{
 if (root == NULL) return;
  
  queue<Node *> q;
  q.push(root);
  q.push(NULL); 
  
  while(q.size() >1){
      
      Node* curr = q.front();
      q.pop();
      
      if(curr == NULL){  // getting NULL implies we have reached the end of current level 
                         //and also next level is completely in the queue so add a NULL to mark next level's end 
                   
          cout <<"$" << " ";
          q.push(NULL);
          continue;
          
      }
      
     cout << curr ->data << " ";
      
      if(curr->left)  q.push(curr->left);
      if(curr->right) q.push(curr->right);
      
    
  }
  
  cout <<"$";

}
