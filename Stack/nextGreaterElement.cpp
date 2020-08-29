Question Link - https://practice.geeksforgeeks.org/problems/next-larger-element/0

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin >>t;
	while(t--){
	    
	    int n;
	    cin >>n;
	    long int arr[n];    
	  for(int i=0;i<n;i++)cin >> arr[i];
	       
   	unordered_map<long int,long int> m;
    stack<long int>s;
    s.push(arr[0]);
    
    for(int i=1;i<n;i++){
  
        while(s.empty() == false && s.top() < arr[i]){
            m[s.top()] = arr[i];
            s.pop();
        }

        s.push(arr[i]);
    }
    
    while(s.empty() == false){
     m[s.top()] = -1;
      s.pop();
    }
	    
	
	for(int i=0;i<n;i++) cout << m[arr[i]] << " ";
	cout << endl;
}
	return 0;
}
