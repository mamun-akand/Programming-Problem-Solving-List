#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n;
    map <int, int> mp;

    for(int i=0; i<n; i++){
        cin >> a;
        mp[a]++;
    }

    int Max = INT_MIN;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second > Max) Max = it->second;
    }

    cout << Max << endl;
    return 0;
}
