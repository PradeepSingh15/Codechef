#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p[26];
        int check[26] = {0};
        for(int i=0; i<26; i++){
            cin>>p[i];
        }
        string s;
        cin>>s;
        for(int i=0; i<(int)s.size(); i++){
            check[s[i] - 'a'] = 1;
        }
        
        int price = 0;
        for(int i=0; i<26; i++){
            if(check[i] == 0)
               price += p[i];
        }
        
        cout<<price<<endl;
    }
    
    return 0;
}