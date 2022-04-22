#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n], count = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i>0 && a[i] < a[i-1]){
                swap(a[i-1], a[i]);
                if(i>1 && a[i-2] > a[i-1])
                    count += 2;
                else if(i>1 && a[i-2] < a[i-1])
                    count += 1;
                else if(i==1)
                    count += 1;
                else
                    count += 1;
            }
        }
        if(count < 2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}