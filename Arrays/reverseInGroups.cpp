https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0



void reverse(vector <long long> &v, int l, int h){

for (int i=l,j= h-1; i<j;i++,j--)
       swap(v[i], v[j]);


}


vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    
        for (int i=0;i<n;i=i+k)
        {
            if(i+k-1 <n)
            reverse(mv, i, i+k);
            else
            reverse(mv, i, n);
           
        }
        return mv;
    
    
}
