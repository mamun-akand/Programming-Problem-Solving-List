// URL: https://cses.fi/problemset/task/1629
 
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
   
   vector<pair<ll,ll>> v;
   ll n; cin>>n;
   
   while(n--){
      ll start, end; cin>>start>>end;
      v.pb({end, start});
   }
   
   sort(all(v));
   ll cnt=0, last=0;
   
   for(auto [e,s]:v){
      if(s >= last){
         cnt++;
         last = e;
      }
   }
   cout << cnt << endl;
   
   SpicyWings;
}