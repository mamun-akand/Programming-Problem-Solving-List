// URL: https://codeforces.com/contest/1945/problem/C

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
   FAST;
   
   Test{
		ll n; cin>>n;
		vll v(n+2), one(n+1, 0), zero(n+1, 0);
		
		for(ll i=1; i<=n; i++){
			char ch; cin>>ch;
			if(ch == '1') v[i] = 1;
			else v[i] = 0;
		}
		
		for(ll i=1; i<=n; i++){
			one[i] = one[i-1] + v[i];
			// cout << one[i] << " ";
		}
		// ln;
		for(ll i=1; i<=n; i++){
			if(v[i] == 0){
				zero[i] = zero[i-1] + 1;
			}else{
				zero[i] = zero[i-1];
			}
			// cout << zero[i] << " ";
		}
		// ln;
		ll ans = -1;
		for(ll i=0; i<=n; i++){
			// cout << ans << endl;
			if(zero[i] >= one[i] and (one[n]-one[i]) >= (zero[n]-zero[i])){
				if( abs(double(n/2.0) - (double)i) < abs( double(n/2.0) - (double)ans) ){
					ans = i;
				}
			}
		}
		if(ans == -1) cout << 0 << endl;
		else cout << ans << endl;
   }
   
   SpicyWings;
}