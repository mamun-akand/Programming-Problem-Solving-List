// URL: https://codeforces.com/contest/1899/problem/C

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
      
      ll a[n+1];
      for(ll i=0; i<n; i++) cin>>a[i];
      a[n]=0;
      
      ll Max = LLONG_MIN;
      ll sum = 0;
      
      for(ll i=0; i<n; i++){
         sum += a[i];
         Max = max(Max, sum);
         if(abs(a[i])%2 == abs(a[i+1])%2 or sum<0){
            sum = 0;
         }
      }
      cout << Max << endl;
   }
   
   SpicyWings;
}