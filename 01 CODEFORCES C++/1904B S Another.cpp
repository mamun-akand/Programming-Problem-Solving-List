// URL: https://codeforces.com/contest/1904/problem/B

#include<bits/stdc++.h>
using namespace std;

//====================================================================
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	

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

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vector<pair<ll,ll>> v(n+1);
      
      for(ll i=1; i<=n; i++){
         ll x; cin>>x;
         v[i] = {x, i};
      }
      sort(all(v));
      
      vll pre(n+1);
      pre[0]=0;
      
      for(ll i=1; i<=n; i++){
         pre[i] = v[i].first + pre[i-1];
      }
      
      // vp(pre);
      
      set<ll> s;
      for(ll i=1; i<=n; i++){
         if(v[i].first > pre[i-1]) s.insert(i);
      }
      s.insert(n+1);
      
      vll ans(n+1, -1);
      
      for(ll i=1; i<=n; i++){
         ll pos = v[i].second;
         ll it = *upper_bound(all(s), i);
         // cout << v[i].first << ' ' << it-2 << endl;
         ans[pos] = it-2;
      }
      
      for(ll i=1; i<=n; i++){
         cout << ans[i] << ' ';
      }
      ln;
   }
   
   SpicyWings;
}