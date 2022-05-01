#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        
        bool flag = true;
        sort(a, a+n);
        for(int i=1; i<n-1; i++){
            long long int d1 = a[i] - a[i-1];
            long long int d2 = a[i+1] - a[i];
            if(2*d1 != d2 && d1 != 2*d2){
                flag = false;
                break;
            }
        }
        if(flag)
          cout<<"Yes"<<endl;
        else
          cout<<"No"<<endl;
    }
    
    return 0;
}