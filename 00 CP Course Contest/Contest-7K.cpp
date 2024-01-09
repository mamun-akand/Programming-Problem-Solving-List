// https://vjudge.net/contest/579458#problem/K
// https://www.codechef.com/problems/AGCY?tab=statement

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

int main(){
   FAST;
   
   Test{
      ll n, q; cin>>n>>q;
      vll dif(n+5, 0), store(n+5, 0);
      while(q--){
         ll l, r; cin>>l>>r;
         dif[l] += 1;
         dif[r+1] -= 1;
         store[r+1] -= (r-l+1);
      } 
      for(ll i=1; i<=n; i++){
         dif[i] += dif[i-1];
      }
      for(ll i=1; i<=n; i++){
         dif[i] += dif[i-1]+store[i];
         cout << dif[i] << ' ';
      }
      ln;
   }
   
   SpicyWings;
}