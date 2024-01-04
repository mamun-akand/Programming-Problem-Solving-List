// URL: https://codeforces.com/contest/1395/problem/A

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
#define   py      cout<<"Yes"<<endl
#define   pn      cout<<"No"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   Test{
      vll v;
      ll od=0, zero=0;
      
      for(ll i=0; i<4; i++){
         ll x; cin>>x;
         if(x%2==1) od++;
         if(x==0 && i<3) zero++;
         v.pb(x);
      }
      
      if(od <= 1 ) {py; continue;}
      
      if(zero == 0){
         for(ll i=0; i<3; i++){
            v[i]--;
         }
         v[3] += 3;
      }
      
      ll new_odd=0;
      
      for(ll i=0; i<4; i++){
         if(v[i]%2==1) new_odd++;
      }
      
      if(new_odd <= 1) py;
      else pn; 
   }
   
   SpicyWings;
}