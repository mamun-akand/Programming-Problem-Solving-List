// URL: https://vjudge.net/contest/577004#problem/E

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
    
   ll tc=0, n, q;
   while(cin>>n>>q){
      if(n==0 and q==0) break;
      tc++;
      vll v(n); for(auto &it:v) cin>>it;
      sort(all(v));
      cout << "CASE# " << tc << ":" << endl;
      while(q--){
         ll value; cin>>value;
         auto it = lower_bound(all(v), value);
         if(it != v.end() && *it==value){
            ll position = it-v.begin()+1;
            cout << value << ' ' << "found at " << position << endl;
         }
         else{
            cout << value << ' ' << "not found" << endl;
         }
      }
   }
   
   SpicyWings;
}