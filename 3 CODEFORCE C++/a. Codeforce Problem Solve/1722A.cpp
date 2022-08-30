#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Timur";

    sort(s.begin(), s.end());

    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string s1; cin>>s1;

        sort(s1.begin(), s1.end());

        if(s == s1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
