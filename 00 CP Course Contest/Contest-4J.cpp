// URL: https://vjudge.net/contest/574988#problem/J

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

int ara[27];

int main(){
   FAST;
    
   string s; cin>>s;
   
   for(ll i=0; i<(ll)s.size(); i++){
      ara[s[i]-'a'] = 1; 
   }
   
   for(ll i=0; i<26; i++){
      if(!ara[i]){
         cout << (char)('a'+i) << endl;
         return 0;
      }
   }
   
   cout << "None\n" << endl;
}