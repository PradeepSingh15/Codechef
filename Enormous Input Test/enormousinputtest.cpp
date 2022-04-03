#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, count = 0;
    cin>>n>>k;
    while(n--){
        long long int x;
        cin>>x;
        if(x % k == 0)
            count++;
    }
    
    cout<<count<<endl;
}