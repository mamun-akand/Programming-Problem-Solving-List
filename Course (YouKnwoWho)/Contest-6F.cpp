// URL: https://lightoj.com/problem/points-in-segments

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
      ll n, q; cin>>n>>q;
      vll v(n); for(auto &it:v) cin>>it;
      cs; ln;
      while(q--){
         ll l, r; cin>>l>>r;
         auto itt = upper_bound(all(v), r);
         auto  it = lower_bound(all(v), l);
         
         cout << (itt-it) << endl;
      }
   }
   
   
   SpicyWings;
}