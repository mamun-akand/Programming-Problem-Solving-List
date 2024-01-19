// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
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
const ll N = 509;
ll ara[N][N];

void fun(ll n, ll x, ll y){
   for(ll i=1; i<=n; i++){
      swap(ara[x][i], ara[y][i]);
   }
   
   for(ll i=1; i<=n; i++){
      swap(ara[i][x], ara[i][y]);
   }
}

int main(){
   FAST;
   
   ll n, x, y; cin>>n>>x>>y;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         cin>>ara[i][j];   
      }
   }
   fun(n, x, y);
   
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=n; j++){
         cout << ara[i][j] << " \n"[j==n];   
      }
   }
   
   SpicyWings;
}