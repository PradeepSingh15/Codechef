#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
	    cin>>x>>y>>z;
	    int s = x+y;
	    if(s <= z)
	       cout<<2<<endl;
	    else{
	        if(x <= z)
	          cout<<1<<endl;
	        else
	           cout<<0<<endl;
	    }
	}
	
	return 0;
}
