// URL: https://codeforces.com/contest/1913/problem/A

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
      string a="", b="";
      // cout << s << endl;
      
      a.pb(s[0]);
      
      ll i;
      for(i=1; i<s.size(); i++){
         if(s[i] == '0') a.pb(s[i]);
         else{break;}
      }
      
      for(ll j=i; j<s.size(); j++){
         b.pb(s[j]);
      }
      
      if(b.size() == 0) cout << -1 << endl;
      else if(a.size() < b.size()) cout << a << ' ' << b << endl;
      else if(a.size() == b.size()){
         if(a < b) cout << a << ' ' << b << endl;
         else cout << -1 << endl;
      }
      else {
         cout << -1 << endl;
      }
   }
    
   SpicyWings;
}