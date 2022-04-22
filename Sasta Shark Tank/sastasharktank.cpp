#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a*10 > b*5)
          cout<<"FIRST"<<endl;
        else if(a*10 == b*5)
          cout<<"ANY"<<endl;
        else
          cout<<"SECOND"<<endl;
    }
    
    return 0;
}