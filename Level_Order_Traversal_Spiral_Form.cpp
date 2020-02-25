https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1


void printSpiral(Node *root)
{
    
   if(root == NULL) return ;
   
   stack <Node *> s1, s2;
   
   s1.push(root);
   
   while(!s1.empty() || !s2.empty()){
       
         while(!s1.empty())
         {
             Node *curr_s1 = s1.top();
             s1.pop();
             
             cout << curr_s1->data << " ";
             
             if(curr_s1->right) s2.push(curr_s1->right);
             if(curr_s1->left) s2.push(curr_s1->left);    
         }
       
       
        while(!s2.empty())
         {
             Node *curr_s2 = s2.top();
             s2.pop();
             
             cout << curr_s2->data << " ";
             
             if(curr_s2->left) s1.push(curr_s2->left);
             if(curr_s2->right) s1.push(curr_s2->right);    
         }
    }
}
