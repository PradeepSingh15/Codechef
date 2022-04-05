#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    string s,a,b;
	    cin>>s;
	    int l = s.length();
	    if(l%2 == 0){
	        a = s.substr(0,l/2);
	        b = s.substr(l/2);
	    }
	    
	    else if(l%2 == 1){
	        a = s.substr(0,l/2);
	        b = s.substr((l/2)+1);
	    }
	    
	   sort(a.begin(),a.end());
	   sort(b.begin(),b.end());
       
	   if(a == b){
	       cout<<"YES"<<endl;
	   }
	   else{
	       cout<<"NO"<<endl;
	   }
	    
	}
	return 0;
}
