#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        string s1; cin>>s1;

        string s2; cin>>s2;

        for(int i=0; i<n; i++){
            if(s1[i]=='B') s1[i]='G';
            if(s2[i]=='B') s2[i]='G';
        }

        int flag=0;

        for(int i=0; i<n; i++){
            if(s1[i]!=s2[i]) flag=1;
        }

        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;

    }

    return 0;
}
