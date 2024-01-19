// https://atcoder.jp/contests/abc194/tasks/abc194_e?lang=en
// https://vjudge.net/contest/579458#problem/T

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
   
   ll n, m; cin>>n>>m;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   
   set<ll>st;;
   //initially 0 to more than equal n need to add in set. else error. Corner case
   for(ll i=0; i<=n; i++){    
      st.insert(i);
   }
   map<ll,ll> mp;
   for(ll i=1; i<=m; i++){
      st.erase(v[i]);
      mp[v[i]]++;
   }
   
   ll Min = *st.begin();
   for(ll i=m+1; i<=n; i++){
      mp[v[i]]++;
      st.erase(v[i]);
      mp[v[i-m]]--;
      if(mp[v[i-m]]==0){
         mp.erase(mp.find(v[i-m]));
         st.insert(v[i-m]);
      }
      Min = min(Min, *st.begin());
   }
   cout << Min << endl;
   
   SpicyWings;
}