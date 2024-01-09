// URL: https://vjudge.net/contest/576547#problem/K
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
    
   Test{
      ll n; cin>>n;
      map<ll,ll> mp;
      for(ll i=1; i<=n; i++){
         ll x; cin>>x;
         mp[x]++;
      }
      priority_queue<pair<ll,ll>> pq;
      for(auto[val,cnt]:mp){
         pq.push({cnt,val});
      }
      ll ans = n;
      while(pq.size() > 1){
         auto [cnt1,val1] = pq.top();
         pq.pop();
         auto [cnt2,val2] = pq.top();
         pq.pop();
         cnt1--; cnt2--;
         ans -= 2;
         if(cnt1>0) pq.push({cnt1,val1});
         if(cnt2>0) pq.push({cnt2,val2});
      }
      cout << ans << endl; 
   }
   
   SpicyWings;
}