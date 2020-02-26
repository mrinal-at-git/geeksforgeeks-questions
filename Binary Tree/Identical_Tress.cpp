https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1


bool isIdentical(Node *r1, Node *r2)
{
    if(r1 == NULL && r2 ==NULL) return true;
    
    if(r1 == NULL || r2 == NULL) return false; 

    if(r1-> data != r2->data) return false;
    
    queue< Node *> q1, q2;
    
    q1.push(r1); q2.push(r2);
    
    while(!q1.empty() && !q2.empty()){
        
        int count1 = q1.size(), count2 = q2.size();
        
        if(count1 != count2) return false;
        
        for(int i=0;i<count1;i++){
            
            Node *root1 = q1.front();
            Node *root2 = q2.front();
            
            if(root1->data !=root2->data) return false;
            
            q1.pop(); q2.pop();

            if(root1->left && root2->left){ q1.push(root1->left); q2.push(root2->left);}

            else if (root1->left || root2->left) return false;
            
            
            iif(root1->right && root2->right){ q1.push(root1->right); q2.push(root2->right);}

            else if (root1->right || root2->right) return false;  
        }
      
    }
    
  
    return true;
      
}
