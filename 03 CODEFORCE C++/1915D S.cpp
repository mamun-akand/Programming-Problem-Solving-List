// https://codeforces.com/contest/1915/problem/D

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

int main(){
   FAST;
   
   Test{
      ll n; cin>>n;
      string s; cin>>s;
      
      if(n<=3) {cout << s << endl; continue;}
      
      string ans = "";
      ll cnt=0;
      for(ll i=0; i<s.size()-3; ){
         if((s[i+3]=='b' or s[i+3]=='c' or s[i+3]=='d')){
            for(ll j=i; j<=i+2; j++){
               ans += s[j];
               cnt++;
            }
            ans += '.';
            // debug(ans);
            i += 3;
            // debug(i);
         }
         else if((s[i+2]=='b' or s[i+2]=='c' or s[i+2]=='d')){
            for(ll j=i; j<=i+1; j++){
               ans += s[j];
               cnt++;
            }
            ans += '.';
            // debug(ans);
            i = i+2;
            // debug(i);
         }
      }
      // cout << ans << endl;
      // cout << cnt << endl;
      for(ll i=cnt; i<n; i++){
         ans += s[i];
      }
      
      cout << ans << endl;
   }

   SpicyWings;
}