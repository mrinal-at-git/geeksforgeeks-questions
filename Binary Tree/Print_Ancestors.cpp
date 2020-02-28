https://practice.geeksforgeeks.org/problems/ancestors-in-binary-tree/1

bool ancestor(Node *root, int target, vector <int>& v)
{
    if(root == NULL) return false;
    
    
    v.push_back(root->data);
    
    if(root->data == target) return true;
    
    if(ancestor(root->left, target,v) || ancestor(root->right, target, v)) return true;
    
    v.pop_back();
    return false;
    
    
}
bool printAncestors(struct Node *root, int target)
{
    vector  <int> v;
    bool  a = ancestor(root, target, v);
   
    v.pop_back();
    for(int i= v.size()-1;i>=0;i--)  cout << v[i] << " ";
    cout << endl;
   
    
}
