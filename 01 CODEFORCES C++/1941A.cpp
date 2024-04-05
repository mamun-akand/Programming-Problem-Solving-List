// https://codeforces.com/contest/1941/problem/A

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
      ll L,R,K; cin>>L>>R>>K;
      vll left, right;
      
      for(ll i=0; i<L; i++){
         ll x; cin>>x;
         left.pb(x);
      }
      sort(all(left));
      ll ans=0;
      for(ll i=0; i<R; i++){
         ll x; cin>>x;
         right.pb(x);
         if(K-x > 0) ans += (upper_bound(all(left), K-x) - left.begin());
      }
      
      cout << ans << endl;
   }
   
   SpicyWings;
}