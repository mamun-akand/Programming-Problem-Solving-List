// URL: https://vjudge.net/contest/576547#problem/P

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
   map<string, string> mp;
   while(n--){
      string s, ss; cin>>s>>ss;
      auto it = mp.find(s);
      
      if(it == mp.end()){
         mp[ss] = s;
      }
      else{
         string tmp = it->second;
         mp[ss] = tmp;
         mp.erase(it);
      }
   }
   cout << mp.size() << endl;
   for(auto [x,y]:mp){
      cout << y << ' ' << x << endl;
   }
   
   SpicyWings;
}