Question Link - https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

int maxLen(int a[], int n) {
 		unordered_map<int, int> m;   
 		int pre_sum =0, largest=0;
 
 		for(int i=0;i<n;i++){
     
  		    pre_sum += a[i];

                   // no need to compare because the subarray would be from (0-i) ->size= i+1;
  		    if(pre_sum == sum){largest = i+1;}   
    
                   //first occurance , insert element with earliest occuring index.
     		if(m.find(pre_sum) ==m.end()){ m.insert({pre_sum, i}); } 
     
                  // if exists in prefix array then take max of prev and curr subarray length.  
     		if(m.find(pre_sum -sum) !=m.end()){ largest = max(largest, (i - m[pre_sum-sum]));}
     }
   
 return res; 
}
