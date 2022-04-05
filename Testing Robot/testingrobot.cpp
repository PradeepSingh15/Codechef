#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        string s;
        cin>>s;
        unordered_set<int> a;
        a.insert(x);
        for(int i=0; i<(int)s.size(); i++){
            if(s[i] == 'R'){
                x++;
                a.insert(x);
            }
            else{
                x--;
                a.insert(x);
            }
        }
        cout<<a.size()<<endl;
    }
    
    return 0;
}