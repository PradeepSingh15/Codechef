#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int a, b;
        cin>>a>>b;
        if(a%2 == 0){
            if(a+2 <= b)
              cout<<a<<" "<<a+2<<endl;
            else
              cout<<-1<<endl;
        }
        else{
            if(a+3 <= b){
                if(a%3 == 0)
                   cout<<a<<" "<<a+3<<endl;
                else
                   cout<<a+1<<" "<<a+3<<endl;
            }
            else
              cout<<-1<<endl;
        }
    }
    
    return 0;
}