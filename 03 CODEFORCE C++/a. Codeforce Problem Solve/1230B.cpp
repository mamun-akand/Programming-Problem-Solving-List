// URL: https://codeforces.com/contest/1230/problem/B

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
    
   ll n, k; cin>>n>>k;
   string s; cin>>s;
   
   if(k==0) {cout << s << endl; return 0;}
   else if(n==1) {cout << 0 << endl; return 0;}
   
   if(s[0]>'1'){
      s[0]='1'; k--;
   }
   
   for(ll i=1; k && i<n; i++){
      if(s[i]=='0') continue;
      else{
         s[i] = '0';
         k--;
      }  
   }
   cout << s << endl;
   
   SpicyWings;
}