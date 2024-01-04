// URL: https://vjudge.net/contest/576547#problem/B

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
   vll v(n); for(auto &it:v) cin>>it;  
   
   ll pos; cin>>pos; 
   pos--;
   
   ll L, R; 
   cin>>L>>R; 
   L--; R--;
   
   v.erase(v.begin()+pos);
   v.erase(v.begin()+L, v.begin()+R);

   cout << (ll)v.size() << endl;
   for(ll i=0; i<(ll)v.size(); i++){
      cout << v[i] << ' ';
   }
   
   SpicyWings;
}