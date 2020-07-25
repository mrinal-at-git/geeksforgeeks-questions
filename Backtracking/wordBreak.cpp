Question Link - https://practice.geeksforgeeks.org/problems/word-break/0

#include <bits/stdc++.h>
using namespace std;



bool dictionaryContains(string &word, vector<string>&dictionary) 
{ 
	
	int n = dictionary.size(); 
	for (int i = 0; i < n; i++) 
		if (dictionary[i] == word) 
			return true; 
	return false; 
} 


bool wordBreakUtil(string str, int n,vector<string>& dictionary) 
{ 
    for (int i=1; i<=n; i++) 
    {
        string prefix = str.substr(0, i); 

        if (dictionaryContains(prefix, dictionary)) 
        {

            if (i == n) 
            { 
               return true;
            } 
            
           if(wordBreakUtil(str.substr(i, n-i), n-i, dictionary)) return true; 
            
           
        } 
    }  
    
    return false;
 }
    
    

int main() {
	
	int t;
	cin >> t;
	while(t--){
	
	int n;
	cin >> n;
	vector<string> v;
	string temp, s;
	for(int i=0;i<n;i++){cin >> temp, v.push_back(temp);}
	
	cin >> s;
	cout << wordBreakUtil(s, s.size(),v);

	cout << endl;
	
	}
	return 0;
}

