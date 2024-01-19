// https://vjudge.net/contest/579458#problem/Q
// https://cses.fi/problemset/submit/1641/

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
   
   ll n, sum; cin>>n>>sum;
   vector<pair<ll,ll>> v(n+1); 
   for(ll i=1; i<=n; i++){
      cin>>v[i].first;
      v[i].second = i;
   }
   sort(v.begin()+1, v.begin()+n+1);
   
   for(ll i=1; i<=n; i++){
      ll need = sum - v[i].first;
      ll L=i+1, R=n;
      while(L<R){
         if(v[L].first + v[R].first == need){
            cout << v[i].second << ' ' << v[L].second << ' ' << v[R].second << endl;
            return 0;
         }
         else if(v[L].first + v[R].first < need) L++;
         else R--;
      }
   }
   cout << "IMPOSSIBLE" << endl;
    
   SpicyWings;
}