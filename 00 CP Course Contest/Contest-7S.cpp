// https://vjudge.net/contest/579458#problem/S

/* 
N.B: If extra space used after printing ans vector, then wrong
*/

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

int main(){
   FAST;
   
   ll n, k; cin>>n>>k;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   
   vll max_store, min_store;
   map<ll,ll> mp;
   
   for(ll i=1; i<=k; i++){
      mp[v[i]]++;
   }
   
   min_store.pb(mp.begin()->first);
   max_store.pb((--mp.end())->first);
   
   for(ll i=k+1; i<=n; i++){
      mp[v[i]]++;
      mp[v[i-k]]--;
      if(mp[v[i-k]]==0) mp.erase(mp.find(v[i-k]));
      
      min_store.pb(mp.begin()->first);
      max_store.pb((--mp.end())->first);
   }
   
   for(ll i=0; i<min_store.size(); i++){
      cout << min_store[i] << " \n"[i == (ll)min_store.size()-1];
   }
   // cout << min_store.back() << endl; //if not then wrong
   
   for(ll i=0; i<max_store.size(); i++){
      cout << max_store[i] << " \n"[i == (ll)max_store.size()-1];
   }
   // cout << max_store.back() << endl; //if not then wrong
    
   SpicyWings;
}