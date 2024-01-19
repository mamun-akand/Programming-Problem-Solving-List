// https://vjudge.net/contest/579458#problem/P

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
   vll v(n); for(auto &it:v) cin>>it;
   map<ll,ll> mp;
   ll R=0, ans=0;
   for(ll L=0; L<n; L++){
      while(R<n and (mp.find(v[R]) != mp.end() or mp.size()<k)){
         mp[v[R]]++;
         R++;
      }
      ans += (R-L);
      mp[v[L]]--;
      if(mp[v[L]]==0) mp.erase(v[L]);
   }
   cout << ans << endl;
    
   SpicyWings;
}