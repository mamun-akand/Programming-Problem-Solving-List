// https://codeforces.com/contest/1941/problem/C

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
      
      ll cnt=0;
      
      for(ll i=0; i<=n-3; i++){
         if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') {cnt++; i+=2;}
         else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') {cnt++; i+=2;}
      }
      cout << cnt << endl;
   }
   
   SpicyWings;
}