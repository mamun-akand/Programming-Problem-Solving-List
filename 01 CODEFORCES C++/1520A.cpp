#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, flag=1; cin>>n;
        string s; cin>>s;

        map<char, int> mp;

        mp[s[n-1]]=1;

        for(int i=1; i<n; i++){
            if(s[i] != s[i-1]) mp[s[i-1]]++;
        }

        for(auto it : mp){
            if(it.second > 1){
                flag=0; break;
            }
        }

        if(flag==0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
