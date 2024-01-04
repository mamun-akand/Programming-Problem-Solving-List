// https://codeforces.com/contest/1915/problem/E
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
      vll v(n+1), pre(n+1);
      for(ll i=1; i<=n; i++){
         cin>>v[i];
      }
      for(ll i=1; i<=n; i++){
         if(i%2==0) v[i] *= -1;
      }
      map<ll,ll> mp;
      bool flag=0;
      for(ll i=1; i<=n; i++){
         pre[i] = v[i] + pre[i-1];
         mp[pre[i]]++;
         if(mp[pre[i]]==2 or pre[i]==0){
            flag=1; break;
         }
      }
      if(flag) py;
      else pn;
   }
   
   SpicyWings;
}