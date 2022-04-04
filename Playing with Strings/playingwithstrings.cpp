#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s, t;
        cin>>s>>t;
        int one = 0, zero = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1')
               one++;
            else
              zero++;
        }
        
        for(int i=0; i<n; i++){
            if(t[i] == '1')
               one--;
            else
               zero--;
        }
        
        if(one == 0 && zero == 0)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}