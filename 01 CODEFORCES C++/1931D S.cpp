// URL: https://codeforces.com/contest/1931/problem/D

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
//#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
           
#define   Test    ll tc; cin>>tc; for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================
         
int main(){
   // FAST;
         
   Test{ 
   	ll n, x, y; cin>>n>>x>>y;
   	map<pair<ll,ll>, ll> mp;
   	ll ans=0;
   	   
   	for(ll i=0; i<n; i++){
   		ll val; cin>>val;
   		ll ff = val%x; ff = (ff+x)%x;
   		ll ss = val%y; ss = (ss+y)%y;
   		
   		ll ff1 = (-1*val)%x; 
   		ff1 = (ff1+x)%x;
	   	ans += mp[{ff1,ss}];
   		
   		mp[{ff,ss}]++;
   	}  
   	 cout << ans << endl;
   }     
         
   SpicyWings;
}         
         
         



















