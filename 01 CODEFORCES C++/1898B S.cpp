// URL: https://codeforces.com/contest/1898/problem/B

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
    
   Test{
      ll n; cin>>n;
      vll v(n+1); 
      for(ll i=1; i<=n; i++){
         cin >> v[i];
      }
      ll last = v[n], ans=0;
      for(ll i=n-1; i>0; i--){
         if(v[i]>last){
            ll r = (v[i]-1)/last;
            ans += r;
            last = v[i]/(r+1);
         }
         else{
            last = v[i];
         }
      }
      cout << ans << endl;
   }
   
   SpicyWings;
}