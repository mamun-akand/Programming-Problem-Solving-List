#include<bits/stdc++.h>
using namespace std;

//====================================================================
/* TYPES  */
#define     ll          long long int
#define     ld          long double
#define     vi          vector <int>
#define     vll         vector <ll>
#define     vld         vector <ld>
#define     map         map <ll, ll>
#define     st          set <ll>
#define     pi          pair <ll, ll>

/* FUNCTIONS */
#define     f0(i,s,e)   for(ll i=s; i< e; i++)
#define     f1(i,s,e)   for(ll i=s; i<=e; i++)
#define     fr(i,e,s)   for(ll i=e-1; i>=s; i--)

#define     pb          push_back
#define     eb          emplace_back
#define     setp(n)     fixed << setprecision(n)
#define     endl        "\n"

#define     FAST        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define     PI          3.1415926535897932384626433832795
#define     all(v)      v.begin(),v.end()

#define     ap          cout<<ans<<endl
#define     yp          cout<<"YES"<<endl
#define     np          cout<<"NO"<<endl

#define     test        ll tc; cin>>tc; f1(t,1,tc)
#define     cs          cout << "Case " << t << ": ";

void        vp(vector<ll> &v) {for(auto it:v){cout << it << endl;}}
//====================================================================


int main(){
    FAST;
//    test{}

    ll n, q, pos; cin>>n>>q;

    vll v;
    ll mex = INT_MIN;

    f0(i,0,n){
        ll x; cin>>x; v.pb(x);
        if(v[i]>mex){
            mex = v[i];
            pos = i+1;
        }
    }

    vector <pi> pre;

    while(1){

        pre.push_back({v[0], v[1]});

        if(v[0]==mex) break;

        if(v[0] < v[1]){
            v.push_back(v[0]);
            v.erase(v.begin());
        }
        else{
            v.push_back(v[1]);
            v.erase(v.begin()+1);
        }
    }

//    f0(i,0,pre.size()){
//        cout << pre[i].first << pre[i].second << endl;
//    }


    while(q--){
        ll t; cin>>t;
        pi ans;

        if(t<=pos) ans = pre[t-1];
        else{

        }
    }

//    vp(v);
    return 0;
}


































