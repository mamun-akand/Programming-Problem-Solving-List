// https://vjudge.net/contest/579458#problem/L

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
const ll N = 1000+9;
ll a[N][N], ara[N][N];

int main(){
   FAST;
   
   ll n, q; cin>>n>>q;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         char ch; cin>>ch;
         if(ch == '*') a[i][j] = 1;
      }
   }
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         ara[i][j] = ara[i][j-1] + ara[i-1][j] - ara[i-1][j-1] + a[i][j];
         // cout << ara[i][j] << ' ';
      }
   }

   while(q--){
      ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
      ll ans = ara[x2][y2] - ara[x1-1][y2] - ara[x2][y1-1] + ara[x1-1][y1-1];
      cout << ans << endl;
   }
   
   SpicyWings;
}