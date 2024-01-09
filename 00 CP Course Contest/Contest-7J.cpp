// https://vjudge.net/contest/579458#problem/J
// https://codeforces.com/problemset/problem/276/C

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
// #define   endl    '\n'
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
const ll N = 2e5+9;
ll dif[N];

int main(){
   FAST;
   
   ll n, q; cin>>n>>q;
   vll v(n); for(auto &it:v) cin>>it;
   sort(all(v), greater<int>());
   
   while(q--){
      ll l, r; cin>>l>>r;
      dif[l]++;
      dif[r+1]--;
   }
   for(ll i=1; i<=n; i++){
      dif[i] += dif[i-1];
   }
   sort(dif+1,dif+n+1,greater<int>());
   
   ll ans=0;
   for(ll i=1; i<=n; i++){
      ans += dif[i]*v[i-1];
   }
   cout << ans << endl;
    
   SpicyWings;
}