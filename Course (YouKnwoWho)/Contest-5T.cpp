// URL: https://vjudge.net/contest/576547#problem/T

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
      cin.ignore();
      set<pair<ll,string>, greater<pair<ll,string>>> p;
      for(ll i=0; i<n; i++){
         string s;
         getline(cin, s);

         string year = s.substr(s.size()-4, s.size()-1);
         string name = s.substr(0, s.size()-5);
         ll y = stoll(year);
         
         p.insert({y, name});
      }
      for(auto [year, name]:p){
         cout << name << endl;
      }
   }
   
   SpicyWings;
}