// URL: https://codeforces.com/contest/1243/problem/B1

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
      string s, ss; cin>>s>>ss;
      
      ll cnt=0; string s1="", s2="";
      
      for(ll i=0; i<n; i++){
         if(s[i] != ss[i]){
            cnt++;
            s1.pb(s[i]);
            s2.pb(ss[i]);
         }
      }
      
      if(cnt == 2 && s1[0]==s1[1] && s2[0]==s2[1]){
         cout << "Yes" << endl;
      }
      else cout << "No" << endl;
      
   }
   
   SpicyWings;
}