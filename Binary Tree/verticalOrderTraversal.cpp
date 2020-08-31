Question Link - https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1/

vector<int> verticalOrder(Node *root)
{
    map<int, vector<int> > m;
    queue<pair<Node*, int> >q;
    int hd =0;
    q.push({root, 0});
    
    while(q.empty() == false){
        
        auto p = q.front();
        Node* curr = p.first;
        hd  = p.second;
        q.pop();
  
        m[hd].push_back(curr->data);
        
        if(curr->left) q.push({curr->left, hd-1});
        if(curr->right) q.push({curr->right, hd+1});
    
        
    }
    
    
    vector<int> v1;
    
    for(auto x: m){
        
        vector <int> v = x.second;
        for(int y: v)
              v1.push_back(y);
    }
    return v1;

}
