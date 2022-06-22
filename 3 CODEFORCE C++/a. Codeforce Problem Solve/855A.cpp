#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map <string, int> mp;

    for(int i=0 ; i<n ; i++){
        string s; cin >> s;

        if(mp[s]==0) cout << "NO" << endl;
        else cout << "YES" << endl;

        mp[s]++;
    }

    return 0;
}
