#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x, y;
        vector<int> a(8,0);
        for(int i=0; i<n; i++){
            cin>>x>>y;
            if(x < 9 && a[x-1] < y){
                a[x-1] = y;
            }
        }
        int sum = 0;
        for(int i = 0; i<a.size(); i++){
            sum += a[i];
        }
        cout<<sum<<endl;
    }
}