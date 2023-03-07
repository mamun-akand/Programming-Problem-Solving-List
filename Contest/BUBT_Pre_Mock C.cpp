#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main(){
//    fast;

    ll t, c=0; cin>>t;
    while(t--){
        c++;
        ll n; cin>>n;
        ll mx=0, cur=0;
        for(ll i=0; i<n-1; i++){
            ll a, b; cin>>a>>b;
            cur = cur+(a-b);
            if(mx<cur) mx = cur;
        }
        cout << "Case " << c <<": " << mx << endl;
    }

    return 0;
}
