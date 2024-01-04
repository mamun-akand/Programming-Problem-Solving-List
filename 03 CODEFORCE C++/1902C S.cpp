// URL: https://codeforces.com/contest/1902/problem/C

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
    
   Test{
      ll n; cin>>n;
      vll v(n); for(auto &it:v) cin>>it;
      sort(all(v));
      
      ll Max = *max_element(all(v));
      ll gcd=0;
      
      for(ll i=0; i<n; i++){
         gcd = __gcd(gcd, (Max-v[i]));
      }
      
      ll x = 0;
      
      if(gcd==0) {v.pb(v[0]+1); gcd=1;}
      else{
         for(ll i=n-1; i>0; i--){
            if((v[i]-gcd) > v[i-1]){
               x = 1;
               v.pb(v[i]-gcd);
               break;
            }
         }
         if(x == 0) v.pb(v[n-1]+gcd);
      }
      sort(all(v));
      
      ll last_max = v.back(), ans=0;
      
      for(ll i=0; i<(ll)v.size(); i++){
         ans += (last_max-v[i])/gcd;
      }
      
      // vp(v);
      cout << ans << endl;
   }
   
   SpicyWings;
}