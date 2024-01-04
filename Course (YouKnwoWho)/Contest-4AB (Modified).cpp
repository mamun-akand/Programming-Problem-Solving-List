// URL: https://vjudge.net/contest/574988#problem/AB

#include<bits/stdc++.h>
using namespace std;

//=================================================================
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
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

const ll MOD = 1e9+7;

int main(){
   FAST;
    
   ll n; cin>>n;
   vll v(n);
   
   ll sum = 0; 
   for(auto &it:v){
      cin>>it;
      sum = (sum + it);
   }
   
   ll ans = 0;
   
   for(ll i=0; i<n-1; i++){
      sum -= v[i];
      ans += (v[i]*(sum%MOD))%MOD;
   }
   
   cout << (ans%MOD) << endl;
   
   SpicyWings;
}