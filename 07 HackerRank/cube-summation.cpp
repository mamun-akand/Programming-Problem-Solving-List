#include<bits/stdc++.h>
using namespace std;
 
//====================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   SpicyWings  return 0;
#define   endl    "\n"
 
#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================

const ll N = 100 + 1;
ll ara[N + 1][N + 1][N + 1];
ll prefixSum[N + 1][N + 1][N + 1];

void updatePrefixSum(ll x, ll y, ll z, ll val) {
    for (ll i = x; i <= N; i += i & -i) {
        for (ll j = y; j <= N; j += j & -j) {
            for (ll k = z; k <= N; k += k & -k) {
                prefixSum[i][j][k] += val;
            }
        }
    }
}

ll queryPrefixSum(ll x, ll y, ll z) {
    ll sum = 0;
    for (ll i = x; i > 0; i -= i & -i) {
        for (ll j = y; j > 0; j -= j & -j) {
            for (ll k = z; k > 0; k -= k & -k) {
                sum += prefixSum[i][j][k];
            }
        }
    }
    return sum;
}

int main() {
    FAST;

    ll tc;
    cin >> tc;

    while (tc--) {
        ll n, q;
        cin >> n >> q;

        memset(ara, 0, sizeof(ara));
        memset(prefixSum, 0, sizeof(prefixSum));

        while (q--) {
            string s;
            cin >> s;

            if (s == "UPDATE") {
                ll i, j, k, val;
                cin >> i >> j >> k >> val;

                updatePrefixSum(i, j, k, val - ara[i][j][k]);
                ara[i][j][k] = val;
            } else {
                ll x1, y1, z1, x2, y2, z2;
                cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

                ll sum = queryPrefixSum(x2, y2, z2) - queryPrefixSum(x1 - 1, y2, z2) -
                         queryPrefixSum(x2, y1 - 1, z2) + queryPrefixSum(x1 - 1, y1 - 1, z2) -
                         queryPrefixSum(x2, y2, z1 - 1) + queryPrefixSum(x1 - 1, y2, z1 - 1) +
                         queryPrefixSum(x2, y1 - 1, z1 - 1) - queryPrefixSum(x1 - 1, y1 - 1, z1 - 1);

                cout << sum << endl;
            }
        }
    }

   SpicyWings;
}
