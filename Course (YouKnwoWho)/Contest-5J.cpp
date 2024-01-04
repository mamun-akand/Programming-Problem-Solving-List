#include<bits/stdc++.h>
using namespace std;

//=================================================================
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
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   ll n; cin>>n;
   map<int,int> mp;
   for(ll i=0; i<n; i++){
      ll x; cin>>x;
      mp[x]++;
   }
   
   ll sum=0;
   vll v; 
   for(auto [x,y]:mp){
      v.pb(y);
      sum += y;
   }
   
   ll ans=0;
   for(ll i=0; i<(ll)v.size(); i++){
      sum = sum - v[i];
      ans += v[i]*sum;
   }
   cout << ans << endl;
   
   SpicyWings;
}