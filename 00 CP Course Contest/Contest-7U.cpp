// https://vjudge.net/contest/579458#problem/U

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
   
   ll n; cin>>n;
   if(n==0){ 
      cout << 10 << endl;
      return 0;
   }
   if(n<=9){ 
      cout << n << endl;
      return 0;
   }
   vll v;
   for(ll i=9; i>1; i--){
      while(n%i==0){
         v.pb(i);
         n /= i;
      }
   }
   if(n != 1){
      cout << -1 << endl;
   }else{
      reverse(all(v));
      for(ll i=0; i<v.size(); i++){
         cout << v[i];
      }
      cout << endl;
   }
   
   SpicyWings;
}