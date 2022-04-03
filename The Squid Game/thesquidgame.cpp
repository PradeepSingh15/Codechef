#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n], sum = 0, res = INT_MIN;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        sum += a[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        int ans = sum;
	        ans -= a[i];
	        res = max (res, ans);
	    }
	    
	    cout<<res<<endl;
	}
	return 0;
}
