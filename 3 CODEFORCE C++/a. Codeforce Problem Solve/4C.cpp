#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map <string, int> mp;

    for(int i=0 ; i<n ; i++){
        string s; cin >> s;

        if(mp[s]==0){
            cout << "OK" << endl;
            mp[s]++;
        }
        else{
            string s2 = s + to_string(mp[s]);
            cout << s2 << endl;
            mp[s]++; mp[s2]++;
        }
    }

    return 0;
}
