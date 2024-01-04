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
   vector<ll> v;
   
   ll ans = 0;
   while(n--){
      ll duration, deadline; cin>>duration>>deadline;
      v.pb(duration);
      ans += deadline;
   }
   
   sort(v.begin(), v.end());
   
   ll finishing_time=0;
   for(auto duration:v){
      finishing_time += duration;
      ans -= finishing_time;
   }
   cout << ans << endl;
   
   SpicyWings;
}