#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        cin>>x>>y>>z;
        int t;
        t = x + (z*2);
        if(t >= y)
           cout<<"Yes"<<endl;
        else
           cout<<"No"<<endl;
    }
    
    return 0;
}