#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n], res = INT_MIN;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n-k+1; i++){
            int sum = 0;
            for(int j=i; j<i+k; j++){
                sum += a[j];
                res = max(res, sum);
            }
        }
        
        cout<<res<<endl;
    }
}