// URL: https://vjudge.net/contest/577004#problem/Z

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
    
   ll n, target;
   cin>>n>>target;
   
   vll v(n+1);
   v[0]=0;

   for(ll i=1; i<=n; i++){
      cin>>v[i];
      v[i] = v[i]+v[i-1];
   }
   // vp(v);
   ll ans=0;
   map<ll,ll> mp;
   
   for(ll i=1; i<=n; i++){
      ll need = v[i]-target;
      if(need==0) ans++;
      auto it = mp.find(need);
      if(it != mp.end()) ans += (*it).second;
      mp[v[i]]++;
   }
   cout << ans << endl;
   
   SpicyWings;
}