#include <iostream>
using namespace std;

int arr[10] = {6,2,5,5,4,5,6,3,7,6};

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b, res = 0;
	    cin>>a>>b;
	    int n = a+b;
	    while(n != 0){
	        int d = n%10;
	        res += arr[d];
	        n /= 10;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
