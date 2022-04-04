#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int sum = 0;
        for(int i=0; i<k; i++){
            sum += a[i];
        }
        int res = sum;
        for (int i = k; i < n; i++) {
            sum += a[i] - a[i - k];
            res = max(res, sum);
        }
        cout<<res<<endl;
    }
}