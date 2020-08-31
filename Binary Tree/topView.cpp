Question Link - https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

void topView(struct Node *root)
{
    map<int,int> m;
    queue<pair<Node*, int> >q;
    int hd = 0; // horizontal distance of node from root.
    q.push({root, 0});
    
    while(q.empty() == false){
        
        auto p = q.front();
        Node* curr = p.first;
        hd = p.second;
             // if node with this hd is already present then ignore this node 
        if(m.count(hd) ==0) m[hd] = curr->data;
        q.pop();
        
        if(curr->left) q.push({curr->left, hd-1});
        if(curr->right) q.push({curr->right, hd+1});
  
    }
 
 for(auto i: m){ 
     cout << i.second << " ";     
 }
 
}
