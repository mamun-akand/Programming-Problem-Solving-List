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
   
   ll n, f; cin>>n>>f;
   vll v(n); for(auto &it:v) cin>>it;
   sort(all(v), greater<int>());
   
   ll cnt=1, buy = 0, sum=0;
   for(ll i=0; i<n; i++){
      sum += v[i]*cnt;
      buy++;
      if(buy==f) {buy=0; cnt++;}
   }
   cout << sum << endl;
    
   SpicyWings;
}