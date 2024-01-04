// URL: https://mirror.codeforces.com/contest/1902/problem/A

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
      ll n; cin>>n;
      string s; cin>>s;
      bool flag=0;
      
      if(n==1 and s[0]=='0') {py; continue;} 
      else if(n==1 and s[0]=='1') {pn; continue;} 
      
      for(ll i=1; i<n; i++){
         if((s[i]=='0' and s[i-1]=='1') or (s[i]=='1' and s[i-1]=='0') or (s[i]=='0' and s[i-1]=='0')){
            flag=1; break;
         }
      }
      
      if(flag) py;
      else pn;
      
   }
   
   
   SpicyWings;
}