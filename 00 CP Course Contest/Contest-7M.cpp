// https://codeforces.com/problemset/problem/835/C
// https://vjudge.net/contest/579458#problem/M

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

const ll MAX_C=10+1, MAX_X=100+1, MAX_Y=100+1;
ll n, q, c; 
ll stars[MAX_C][MAX_X][MAX_Y]; 

int main(){
   FAST;
   
   cin>>n>>q>>c;
   while(n--){
      ll x,y,bright; cin>>x>>y>>bright;
      stars[bright][x][y]++;
   }
   //3D_Pre
   for(ll b=0; b<=c; b++){
      for(ll x=1; x<MAX_X; x++){
         for(ll y=1; y<MAX_Y; y++){
            stars[b][x][y] += stars[b][x-1][y] + stars[b][x][y-1] - stars[b][x-1][y-1];
         } 
      }
   }
   while(q--){
      ll t,x1,y1,x2,y2; cin>>t>>x1>>y1>>x2>>y2;
      ll ans=0;
      for(ll b=0; b<=c; b++){
         ll brightness = (t+b)%(c+1);
         ll quantity = stars[b][x2][y2] - stars[b][x1-1][y2] - stars[b][x2][y1-1] + stars[b][x1-1][y1-1];
         ans += brightness*quantity;
      }
      cout << ans << endl;
   }
    
   SpicyWings;
}