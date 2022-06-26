#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin>>n>>k;

    vector <int> v;

    for(int i=0; i<n; i++){
        int a; cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int ans;

    if(k==0) ans = v[0]-1;
    else ans = v[k-1];

    int cnt=0;

    for(int i=0; i<v.size(); i++){
        if(v[i] <= ans) cnt++;
    }

    if(cnt != k || ans<1) cout << "-1" << endl;
    else cout << ans;

    return 0;
}
