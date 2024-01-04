// URL: https://vjudge.net/contest/574988#problem/N

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
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
      string s; cin>>s;
      
      vector<char> v;
      
      for(ll i=0; i<(ll)s.size(); i++){
         v.pb(s[i]);
      }
      
      cout << t << " ";
      
      if(!next_permutation(v.begin(), v.end())){
         cout << "BIGGEST" << endl; 
      }
      else{
         for(ll i=0; i<(ll)v.size(); i++){
            cout << v[i];
         }
         ln;
      }
   }
   
   SpicyWings;
}