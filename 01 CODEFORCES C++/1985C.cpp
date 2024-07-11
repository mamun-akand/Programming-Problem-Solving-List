// URL: https://codeforces.com/contest/1985/problem/C

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
   	ll n; cin>>n;
   	vll v(n); for(ll i=0; i<n; i++) cin>>v[i];
   	
   	vll Max_array;
   	ll Max=0;
   	for(ll i=0; i<n; i++){
   		Max_array.pb(max(Max, v[i]));
   		Max = max(Max, v[i]);
   	} 
		
		vll pre_sum(n);
		pre_sum[0] = v[0];
		
		for(ll i=1; i<n; i++){
			pre_sum[i] = pre_sum[i-1] + v[i]; 
		}
		
		ll cnt=0;
		for(ll i=0; i<n; i++){
			if(pre_sum[i] == 2*Max_array[i]) cnt++;
		}
		cout << cnt << endl;
		
   }
   
   SpicyWings;
}





















