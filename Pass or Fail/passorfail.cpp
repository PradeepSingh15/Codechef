#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x, p, t;
        cin>>n>>x>>p;
        t = (x*3) - (n-x);
        if(t >= p)
           cout<<"Pass"<<endl;
        else
           cout<<"Fail"<<endl;
    }
    
    return 0;
}