// URL: https://vjudge.net/problem/AtCoder-abc182_b

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll      long long int
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
   vll v(n); for(auto &it:v) cin>>it;
   
   ll ans=0, cnt_max=0;
   
   for(ll i=2; i<=1000; i++){
      ll cnt=0;
      for(ll j=0; j<=n; j++){
         if(v[j]%i==0) cnt++;
      }
      if(cnt>cnt_max){
         ans = i;
         cnt_max = cnt;
      }
   }
   
   cout << ans << endl;
   
   SpicyWings;
}