// URL: https://www.spoj.com/problems/MAIN8_C/

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
const ll N = 5e4+100;
vll v(N);
ll n, k;

bool mono(ll candy){
   ll student=0;
   for(ll i=1; i<=n; i++){
      if(v[i] >= candy){
         student += v[i]/candy;
      }
   }
   return student >= k;
}

int main(){
   FAST;
    
   Test{
      cin>>n>>k;
      for(ll i=1; i<=n; i++) cin>>v[i];
      
      ll l=1, r=1e9+100, ans=0;
      while(l<=r){
         ll mid = l + (r-l)/2;
         if(mono(mid)){
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