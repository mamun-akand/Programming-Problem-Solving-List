// URL: https://codeforces.com/contest/1945/problem/E

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
		ll n, x; cin>>n>>x;
		ll found = 1;
		
		vll v(n+1);
		for(ll i=1; i<=n; i++){
			ll p; cin>>p;
			if(p == x) found = i;
			v[i] = p;
		}
		
		ll L=1, R=n+1;
		while(R-L != 1){
			ll mid = (R+L)/2;
			if(v[mid] <= x) L = mid;
			else R = mid;
		}
		
		// debug(L);
		// debug(R);
		if(L == found) cout << 0 << endl;
		else{
			cout << 1 << endl;
			cout << found << " " << L << endl;
		}
   }
   
   SpicyWings;
}





















