https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0


vector<int> leaders(int a[], int n){
    
     int max = a[n-1];
     vector <int> v;
     
     
     for(int i=n-1;i>=0;i--)
     {
         if(a[i] >=max)
          {v.insert(v.begin(), a[i]);
            max = a[i];}
       
     }
    
    
  return v;  
}
