// URL: https://codeforces.com/contest/1898/problem/A

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
#define   pb      push_bacneed
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================

int main(){
   FAST;
    
   Test{
      ll n, need; cin>>n>>need; 
      string s; cin>>s;
      ll cnt=0;
      
      for(ll i=0; i<=(ll)s.size(); i++){
         if(s[i]=='B') cnt++;
      }
      
      if(need==cnt) cout << 0 << endl;
      else {
         cout << 1 << endl;
         for(ll i=0; i<n; i++){
            cnt -= (s[i]=='B');
            if(cnt==need){
               cout << i+1 << ' ' << 'A' << endl;
               break;
            }
            if(cnt+i+1 == need){
               cout << i+1 << ' ' << 'B' << endl;
               break;
            }
         }
      }
   }
      
   SpicyWings;
}