// URL: https://vjudge.net/contest/576547#problem/W

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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vll v; 
      for(ll i=1; i<=n; i++){
         v.pb(i);
      }
      
      deque<ll> A;
      while(!v.empty()){
         if(A.empty()){
            ll y = v.back();
            v.pop_back();
            A.push_front(y);
         }else{
            ll x = A.back();
            A.pop_back();
            A.push_front(x);
         
            ll y = v.back();
            v.pop_back();
            A.push_front(y);
         }
      }
      
      for(ll i=0; i<n; i++){
         if(i<n-1) cout << A[i] << ' ';
         else cout << A[i];
      }
      ln;
   }
   
   SpicyWings;
}