#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    vector<int>arr(n);
	    for(int i = 0; i<n; i++)
	    cin>>arr[i];
	    
	    for(int i = 0; i<n; i++){
	        
	        arr[i] = arr[i] - i;
	    }
	    unordered_map<int,int>mp;
	    
	    int maxi= 0;
	    for(int x : arr){
	        mp[x]++;
	        maxi = max(maxi,mp[x]);
	    }
	    cout<<n - maxi <<endl;
	    
	    
	    
	}
}
