#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t, x, y, n; cin >> t;

    while(t--){
        cin >> x >> y >> n;

        ll d = (n-y)/x;
        ll k = d*x + y;

        cout << k << endl;
    }

    return 0;
}
