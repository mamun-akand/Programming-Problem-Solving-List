// URL: https://www.spoj.com/problems/PUCMM210/

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

const ll MOD = 1000000003;
const ll N = 1000000+9;

ll preSum[N];

void cb(){
   preSum[0] = 0;
   for(ll n=1; n<N; n++){
      ll temp = (n*(n+1))/2;
      preSum[n] = ((temp%MOD)*(temp%MOD))%MOD;
   }
}

void prefix(){
   for(ll i=1; i<N; i++){
      preSum[i] = ((preSum[i]+preSum[i-1])%MOD)%MOD;
   }
}

int main(){
   FAST;
   
   cb();
   prefix();
   
   Test{
      ll n; cin>>n;
      cout << (ll)preSum[n] << endl;
   }
   
   SpicyWings;
}