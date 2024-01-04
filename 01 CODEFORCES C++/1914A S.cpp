// URL: https://codeforces.com/contest/1914/problem/A

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
      
      int ara[27]={};
      for(ll i=0; i<n; i++){
         ll tmp = s[i]-'A'+1;
         ara[tmp]++;
      }
      ll cnt=0;
      for(ll i=1; i<=27; i++){
         if(ara[i]>=i) cnt++;
      }
      cout << cnt << endl;
   }
    
   SpicyWings;
}