// URL: https://codeforces.com/contest/1907/problem/B

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
      string s; cin>>s;
      string ans = "";
      
      vll vA, va;
      
      for(ll i=0; i<s.size(); i++){
         if(s[i]=='B' or s[i]=='b') {
            if(s[i]=='B'){
               if(!vA.empty()){
                  ll pos = vA.back();
                  vA.pop_back();
                  ans[pos] = '*';
               }
               else{
                  continue;
               }
            }
            else if(s[i]=='b'){
               if(!va.empty()){
                  ll pos = va.back();
                  va.pop_back();
                  ans[pos] = '*';
               }
               else{
                  continue;
               }
            }
         }
         else{
            if(isupper(s[i])){
               ans.pb(s[i]);
               vA.pb(ans.size()-1);
            }
            else{
               ans.pb(s[i]);
               va.pb(ans.size()-1);
            }  
         }
      }
      for(ll i=0; i<ans.size(); i++){
         if(ans[i] == '*') continue;
         else cout << ans[i];
      }
      ln;
   }
   
   
   SpicyWings;
}