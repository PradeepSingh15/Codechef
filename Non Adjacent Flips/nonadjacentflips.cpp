#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n, ans = 0;
        cin>>n;
        string s, t;
        cin>>s;
        for (int i=0; i<n; i++){
            t = s;
            
            sort(t.begin(), t.end());
            
            if(t[0] == t[n-1] && t[0] != '1')
                break;
            else if(t[0] != t[n-1] && t[0] != '1')
                ans++;
            else if(t[0] == '1')
                ans++;
                
            for(int j=0; j<n; j++){
                if(s[j] == '1'){
                    s[j] = '0';
                    j++;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}