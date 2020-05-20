https://practice.geeksforgeeks.org/problems/equilibrium-point/0



int equilibriumPoint(long long a[], int n) {
    
    long long int pefix_array[n], sum=0;
      
    for(int i=0;i<n;i++)
         { sum+=a[i];
          pefix_array[i] = sum;}
    
         
    for(int i=0;i<n;i++)
    {
        if((pefix_array[i] - a[i]) == (sum - pefix_array[i]))
            return i+1;
        
    }
    
    
    return -1;
    
}
