Question Link - https://practice.geeksforgeeks.org/problems/word-break-part-2/0


#include <bits/stdc++.h>
using namespace std;
vector<string> ans;


bool dictionaryContains(string &word, vector<string>&dictionary) 
{ 
	
	int n = dictionary.size(); 
	for (int i = 0; i < n; i++) 
		if (dictionary[i] == word) 
			return true; 
	return false; 
} 


void wordBreakUtil(string str, int n,vector<string>& dictionary ) 
{ 
    
    for (int i=1; i<=n; i++)    
    {                                                             
        
        string prefix = str.substr(0, i); 
  
        
        if (dictionaryContains(prefix, dictionary))                                        
        {
              ans.push_back(prefix);
            
            if (i == n) 
            { 
               	cout<<'(';
		 for(int i=0;i<ans.size();i++){
			if(i==ans.size()-1)	cout<<ans[i];
			else cout<<ans[i]<<' ';
		}
		cout<<')';
		 
            } 

           wordBreakUtil(str.substr(i, n-i), n-i,dictionary); 
            
           ans.pop_back();
            
            
        } 
    }     
   
}
    
   

int main() {
	
	int t;
	cin >> t;
	while(t--){
	
	int n;
	cin >> n;
	vector<string> dictionary;
	string temp, s;
	for(int i=0;i<n;i++){cin >> temp, dictionary.push_back(temp);}
	
	cin >> s;
	wordBreakUtil(s, s.size(),dictionary);
	ans.clear();
	cout << endl;
	
	}
	return 0;
}

