// URL: https://vjudge.net/contest/577004#problem/AF

// URL: https://cses.fi/problemset/task/1073
 
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
 
int main(){
   FAST;
    
   ll n; cin>>n;
   vll v(n); for(auto &it:v) cin>>it;
   
   multiset<ll> mp;
   for(ll i=0; i<n; i++){
      auto it = mp.upper_bound(v[i]);
      if(it == mp.end()){
         mp.insert(v[i]);
      }
      else{
         mp.erase(it);
         mp.insert(v[i]);
      }
   }
   cout << mp.size() << endl;
   
   SpicyWings;
}