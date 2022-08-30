#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
using namespace std;


int main(){
    fast;
    ll t; cin>>t;

    while(t--){
        ll n, k, b, s; cin>>n>>k>>b>>s;
        vector<int> v;

        ll val = (k*b)+(k-1);

        if(s >= val){
            v.push_back(val);
            s = s-val;
        }
        else{
            v.push_back(s);
            s = 0;
        }

        for(ll i=0; s != 0; i++){
            if(s>=b){
                v.push_back(k-1);
                s = s-(k-1);
            }
            else{
                v.push_back(s);
                s = 0;
            }
        }

        if(v.size() > n || s > (val+(k-1)*(n-1))){
            cout << -1 << endl;
            continue;
        }

            ll cnt=0;
            if(v.size()>0){
                for(ll i=0; i < v.size(); i++){
                    cout << v[i] << " "; cnt++;
                }
            }

            for(int i=cnt; i<n; i++){
                cout << 0 << " ";
            }

    }

    return 0;
}
