Link - https://www.geeksforgeeks.org/count-number-subarrays-given-xor/


int subarrayXor(int arr[], int n, int m) {
    unordered_map<int, int> map;
    
    int subarrayxor = 0, b =0, res=0;
                                             
    
    for(int i=0;i<n;i++){
        
       subarrayxor ^= arr[i];
       
       b = m ^ subarrayxor;
       
       if(map.find(b) != map.end()) {res += map[b];}
       
       if(subarrayxor == m) {res++;}
       
 
       map[subarrayxor]++;
            
    }
    return res;
   
}
