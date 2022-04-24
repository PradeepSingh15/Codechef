#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int countp = 0, countn = 0, diff = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] < 0)
              countn++;
            else
              countp++;
        }
        
        diff = abs(countp - countn);
        
        if(diff == 0 || diff == 1)
           cout<<"Yes"<<endl;
        else if(diff == 2){
            if((countp % 2 == 0) && (countn % 2 == 0))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        else
           cout<<"No"<<endl;
    }
    
    return 0;
}