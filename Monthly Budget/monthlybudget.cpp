#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        long long int total;
        total = b*30;
        if(a >= total)
           cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }
    
    return 0;
}