// URL: https://vjudge.net/problem/SPOJ-CSUMQ

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
   
   ll n; cin>>n;
   vll preSum(n+1);
   
   preSum[0]=0;
   
   for(ll i=1; i<=n; i++){
      ll x; cin>>x;
      preSum[i] = preSum[i-1]+x;   
   }
    
   Test{
      ll L, R; cin>>L>>R;
      L++; R++;
      
      cout << (preSum[R] - preSum[L-1]) << endl;
   }
   
   SpicyWings;
}