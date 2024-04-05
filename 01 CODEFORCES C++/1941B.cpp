// https://codeforces.com/contest/1941/problem/B

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
   
   Test{
      ll n; cin>>n;
      vll v;
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         v.pb(x);
      }
      
      for(ll i=1; i<n-1; i++){
         ll Min = min(v[i-1], v[i+1]);
         Min = min(v[i]/2, Min);
         
         v[i-1] -= Min;    
         v[i+1] -= Min;    
         v[i] -= Min*2;    
      }
      ll flag=1;
      for(ll i=0; i<n; i++){
         if(v[i] != 0) flag=0;
      }
      if(flag) cout << "YES" << endl;
      else cout << "NO" << endl;
   }
   
   SpicyWings;
}