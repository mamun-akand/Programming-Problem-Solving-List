// URL: https://codeforces.com/contest/1362/problem/A

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
      ll a, b; cin>>a>>b;
      
      ll ans=0, ok=0;
      
      if(a<=b){
         ll temp = 0;
         for(ll i=0; i<=64; i++){
            temp = (a << i);
            if(temp == b){
               ans = i;
               ok = 1;
               break;
            }
         }
      }
      else{
         ll temp = 0;
         for(ll i=0; i<=64; i++){
            temp = (a >> i);
            if(temp == b){
               ans = i;
               ok = 1;
               break;
            }
            if(temp & 1){
               break;
            }
         }
      }
      if(ok) cout << ceil(ans/3.0) << endl;
      else cout << -1 << endl;
   }
   
   SpicyWings;
}