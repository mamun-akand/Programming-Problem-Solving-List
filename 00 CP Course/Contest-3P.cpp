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
   
   ll n; cin>>n;
    
   ll ara[10] = {0}, sum=1;
   ara[0] = 1;
   
   for(ll i=1; i<=9; i++){
      sum *= i;
      ara[i] = sum;
   }
   
   vll v;
   v.pb(0);
   
   for(ll i=10; i<=100000; i++){
      ll n=i, tmp_sum=0;
      while(n){
         ll d = n%10;
         tmp_sum += ara[d];
         n /= 10;
      }
      
      if(tmp_sum%i==0){ 
         v.pb(i);
      }
   }
   
   vll v2(v.size());
   v2[0] = 0;
   
   for(ll i=1; i<v.size(); i++){
      v2[i] += v2[i-1] + v[i]; 
   }
   
   ll i = upper_bound(all(v), n) - v.begin();
   cout << v2[i-1] << endl;   
     
   SpicyWings;
}