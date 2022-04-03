#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long  count = 0;
	    while (n > 0) {
	        int mod = n % 10;
	        if (mod == 4) count++;
	        n /= 10;
	    }
	    cout << count << '\n';
	}
	
	return 0;
}

