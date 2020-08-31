Question Link - https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1/


vector <int> bottomView(Node *root)
{
  
   
    map<int, int> m;
    queue<pair<Node*, int> >q;
    int hd =0;
    q.push({root, 0});
    
    while(q.empty() == false){
        
        auto p = q.front();
        Node* curr = p.first;
        hd  = p.second;
        q.pop();
        
        
        // if hd is not present then it is created,
        // if it is already present then it is overwritten.
        m[hd] = curr->data;
        
        
        if(curr->left) q.push({curr->left, hd-1});
        if(curr->right) q.push({curr->right, hd+1});
    
        
    }
    
    
    vector<int> v;
    for(auto i: m){
        v.push_back(i.second);
    }
    
    return v;
}
