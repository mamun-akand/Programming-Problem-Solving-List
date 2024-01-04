// URL: https://cses.fi/problemset/task/1630

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================

int main(){
   FAST;
   ll n; cin>>n;
   vector< pair<ll,ll >> v;
    
   while(n--){
      ll x, y; cin>>x>>y;
      v.pb({x,y});
   }
   
   sort(v.begin(), v.end(), [](pair<ll,ll> a, pair<ll,ll> b){
      if(a.first != b.first) return a.first < b.first;
      else return a.second > b.second;
   });
   
   ll e=0, sum=0;
   for(auto [x,y]:v){
      e = e+x;
      sum += (y-e);
   }
   cout << sum << endl;
   
   SpicyWings;
}