// URL: https://vjudge.net/contest/577004#problem/B

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
const ll N = 1e5+9;
vll v(N);
ll stall, cows;

bool ok(ll dis){
   ll cnt=0, last_cow=v[1];
   for(ll i=2; i<=stall; i++){
      if(v[i]-last_cow >= dis){
         cnt++; last_cow = v[i];
      }
   }
   cnt++;
   return cnt >= cows;
}

int main(){
   FAST;
    
   Test{
      cin>>stall>>cows;
      for(ll i=1; i<=stall; i++){
         cin>>v[i];
      }
      sort(v.begin()+1, v.begin()+stall+1);
      
      ll l=1, r=1e9+9, ans=0;
      while(l<=r){
         ll mid = l+(r-l)/2;
         if(ok(mid)){
            ans = mid;
            l = mid+1;
         }
         else{
            r = mid-1;
         }
      }
      cout << ans << endl;
      
   }
   
   SpicyWings;
}