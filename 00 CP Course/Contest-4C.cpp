// URL: https://vjudge.net/problem/CodeForces-433B

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
   vll v(n+1);
   vll preSum(n+1), preSum2(n+1);
   
   v[0]=0;
   preSum[0]=0;
   
   for(ll i=1; i<=n; i++){
      ll x; cin>>x;
      v[i] = x;
      preSum[i] = preSum[i-1]+x;   
   }
   
   // vp(v); ln;
   // vp(preSum); ln;
   
   sort(all(v));
   preSum2[0]=0;
   
   for(ll i=1; i<=n; i++){
      preSum2[i] = preSum2[i-1]+v[i];   
   }
   
   Test{
      ll type, L, R; cin>>type>>L>>R;
      
      if(type==1) cout << (preSum[R] - preSum[L-1]) << endl;
      else cout << (preSum2[R] - preSum2[L-1]) << endl;
   }
   
   SpicyWings;
}