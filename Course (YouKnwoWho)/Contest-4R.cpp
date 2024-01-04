// URL: https://vjudge.net/contest/574988#problem/R

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

int main(){
   FAST;
    
   ll n, q; cin>>n>>q;
   vll v(n+1); v[0] = 0;
   
   for(ll i=1; i<=n; i++){
      ll x; cin>>x;
      v[i] = v[i-1] ^ x;
   }
   
   while(q--){
      ll L, R; cin>>L>>R;
      cout << (v[R] ^ v[L-1]) << endl;
   }
   
   SpicyWings;
}