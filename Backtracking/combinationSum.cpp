Question Link - https://practice.geeksforgeeks.org/problems/combination-sum/0


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findCombinations(vector <int> &a, int sum, vector <int> &r, vector<vector<int> >&res, int i){
    
if(sum <0) return;

if(sum ==0) {res.push_back(r);
       return;
}



while(i < a.size() && sum- a[i] >=0){
    
    r.push_back(a[i]);
    
    findCombinations(a, sum-a[i], r, res, i);
    i++;
    
    r.pop_back();
    
}

}




vector<vector<int> >combinationSum(vector<int>& a, int sum){
    
    sort(a.begin(), a.end());
    
    a.erase(unique(a.begin(), a.end()), a.end());
    
    vector<int> r;
    vector<vector<int> > res;
    
    findCombinations(a, sum, r, res, 0);
    
    return res;
}



int main() {
    int t;
    cin >>t;
    while(t--){
        
      int n, temp;
      cin >>n;
      vector<int>a;
    
      for(int i=0;i<n;i++){
          cin >> temp;
          a.push_back(temp);
      }
        
       
      int sum;
      cin >> sum;
      
      vector<vector<int> > result = combinationSum(a, sum);
        
      if(result.size() == 0) cout << "Empty";  
       
       else{
           
           for(int i =0;i<result.size();i++){
               
               
            if (result[i].size() > 0) {
              cout<< "("; 
              
              for(int j = 0;j<result[i].size(); j++){
                  
                  if(j == result[i].size()-1) cout << result[i][j];
                  else cout << result[i][j] << " ";
              }
              cout<< ")"; 
               
             }
           }
    
       } 
    
     cout << endl;
        
    }
	return 0;
}
