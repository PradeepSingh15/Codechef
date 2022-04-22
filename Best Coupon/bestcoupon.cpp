#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if((x*0.1) >= 100) 
          cout<<(x*0.1)<<endl;
        else
          cout<<100<<endl;
    }
    
    return 0;
}