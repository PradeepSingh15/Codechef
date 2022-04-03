#include <iostream>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n, l, f;
		cin>>n;
		l = n%10;
		while(n >= 10)
		{
			n /= 10;
		}
		f = n;
		cout<<l+f<<"\n";
		
	}
	return 0;
}