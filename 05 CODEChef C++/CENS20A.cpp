// https://vjudge.net/contest/579458#problem/N
// https://www.codechef.com/problems/CENS20A

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
bool ara[N][N];
ll a[N][N], pref[N][N];

int main(){
   FAST;
   
   ll n, m; cin>>n>>m;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         char ch; cin>>ch;
         if(ch == '0') ara[i][j] = 0;
         else ara[i][j] = 1;
      }
   }
   ll q; cin>>q;
   while(q--){
      ll x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
      a[x1][y1] += 1;   
      a[x1][y2+1] -= 1;   
      a[x2+1][y2+1] += 1;   
      a[x2+1][y1] -= 1;   
   }
   for(ll i=1; i<=n; i++){ //prefix sum
      for(ll j=1; j<=m; j++){
         pref[i][j] = pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1] + a[i][j];
         if(pref[i][j]%2==0){
            cout << ara[i][j];
         }else{
            cout << (ara[i][j] ^ 1) ;
         }
      }
      cout << endl;
   }

   SpicyWings;
}