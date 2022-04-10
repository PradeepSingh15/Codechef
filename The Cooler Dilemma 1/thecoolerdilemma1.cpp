#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int x, y, m;
        cin>>x>>y>>m;
        if((x*m) < y)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    
    return 0;
}