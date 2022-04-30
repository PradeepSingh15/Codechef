#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int m, n, k;
	    cin>>m>>n>>k;
	    int t = n*k;
	    if(t >= m)
	       cout<<"No"<<endl;
	    else
	       cout<<"Yes"<<endl;
	}
	
	return 0;
}
