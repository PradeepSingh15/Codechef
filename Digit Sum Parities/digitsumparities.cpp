#include<bits/stdc++.h>
using namespace std;

long long int digcal(long long int n)
{
    long long int sum = 0;
    while(n != 0){
        long long int res = n % 10;
        sum += res;
        n /= 10;
    }
    
    return sum;
}


int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int d = digcal(n);
        if(d%2 == 0){
            while(d%2 == 0){
                n++;
                d = digcal(n);
            }
            cout<<n<<endl;
        }
        else{
            while(d%2 != 0){
                n++;
                d = digcal(n);
            }
            cout<<n<<endl;
        }
    }
    
}