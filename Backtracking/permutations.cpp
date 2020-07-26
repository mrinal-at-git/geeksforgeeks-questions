Question Link - https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string/0

#include <bits/stdc++.h> 
using namespace std; 
vector<string>v;


void permute(string a, int l, int r) 
{ 
	 
	if (l == r) 
		v.push_back(a); 
	else
	{ 
		for (int i = l; i <= r; i++) 
		{ 

			swap(a[l], a[i]); 

			permute(a, l+1, r); 

			swap(a[l], a[i]); 
		} 
	} 
} 


int main() 
{ 
    int t;
    cin >> t;
    while(t--){
	string str;
	cin  >> str;
	int n = str.size(); 
	v.clear();
	permute(str, 0, n-1); 
	
	sort(v.begin(), v.end());
	
	for(string x : v)
	   cout << x << " ";
	cout << endl;
    }
	return 0; 
} 


