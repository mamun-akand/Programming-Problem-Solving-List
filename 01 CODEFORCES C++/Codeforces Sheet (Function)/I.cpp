// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

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

ll get_power(ll x, ll pow){
   ll power=1;
   for(ll i=1; i<=pow; i++){
      power *= x;
   }
   return power;
}

ll solve(ll x, ll n){
   ll ans=0;
   for(ll i=2; i<=n; i+=2){
      ans += get_power(x, i);
   }
   return ans;
}

int main(){
   FAST;
   
   ll x, n; cin>>x>>n;
   cout << solve(x, n) << endl;
    
   SpicyWings;
}