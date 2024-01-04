#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        int ara[n];
        map<int, int> mp;

        for(int i=0; i<n; i++){
            cin >> ara[i];
            mp[ara[i]]++;
        }

        auto it = mp.begin();

        int unq = (*it).second==1 ? (*it).first : (*next(it, 1)).first;

        auto pos = find(ara, ara+n, unq);
        int indx = pos - &ara[0];

        cout << indx+1 << endl;
    }

    return 0;
}
