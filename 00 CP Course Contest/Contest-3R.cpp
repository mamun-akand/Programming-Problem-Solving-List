// URL: https://vjudge.net/contest/571543#problem/R

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll      long long int
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
      
      bool zero=0;
      ll cnt = 0;
      
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         if(x==0) zero=1;
         if(x<0) cnt++;
      }
            
      if(zero==1){
         cout << 0 << endl;
      }
      else if(cnt%2==0){
         cout << 0 << endl;
      }
      else cout << 1 << endl;
   }
   
   SpicyWings;
}