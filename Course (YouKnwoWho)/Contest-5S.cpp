// URL: https://vjudge.net/contest/576547#problem/S

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
   priority_queue<pair<ll, ll>> neg;
   priority_queue<pair<ll, ll>> pos;
   
   while(n--){
      ll x, a; cin>>x>>a;
      if(x<0){
         neg.push({x,a});
      }
      else{
         pos.push({-x,a});
      }
   }
   
   int bigger = (pos.size() >= neg.size()) ? 1 : -1;
   ll ans = 0;
   
   while(1){
      if(bigger == 1){
         if(pos.empty()) break;
         ans += pos.top().second;
         pos.pop();
         
         if(neg.empty()) break;
         ans += neg.top().second;
         neg.pop();
      }
      else{
         if(neg.empty()) break;
         ans += neg.top().second;
         neg.pop();
         
         if(pos.empty()) break;
         ans += pos.top().second;
         pos.pop();
      }
   }
   cout << ans << endl;
   
   SpicyWings;
}