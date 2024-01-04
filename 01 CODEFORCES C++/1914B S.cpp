// URL: https://codeforces.com/contest/1914/problem/B

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
      ll n, k; cin>>n>>k;
      if(k==0){
         for(ll i=n; i>0; i--){
            cout << i << ' ';
         }
         ln;
      }
      else{
         ll start = n-k;
         for(ll i=start; i<=n; i++){
            cout << i << ' ';
         }
         for(ll i=start-1; i>=1; i--){
            cout << i << ' ';
         }
         ln;
      }
   }
    
   SpicyWings;
}