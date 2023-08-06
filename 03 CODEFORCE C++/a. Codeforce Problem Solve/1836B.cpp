// URL: https://codeforces.com/contest/1836/problem/B

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
      ll n, b, c; cin>>n>>b>>c;
      
      ll tt;
      
      if(c%2==0) tt = (c-1)/2;
      else tt = c/2;
      
      ll s = b*c;
      
      ll need = n*tt;
      
      if(need >= s){
         cout << s << endl;
         continue;
      }
      
      else{
         ll x = (s - (tt*(n-1)));

         ll r = x % c; 
         
         ll ans;
         if(r > tt) ans = x + (c-r);
         else ans = x-r;
         
         cout << s-ans << endl;
         continue;
      }
      

   }
   
   SpicyWings;
}