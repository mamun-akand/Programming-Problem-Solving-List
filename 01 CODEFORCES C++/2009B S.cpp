// URL: https://codeforces.com/contest/2009/problem/B

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
#define   vp(v)   for(auto it:v){cout << it <<' ';}
//=====================================================================

int main(){
	// FAST;
   
	Test{
		ll n; cin>>n;
		vll v;

		for(ll i=1; i<=n; i++){
			
			string s; cin>>s;
			for(ll j=0; j<4; j++){
				if(s[j] == '#'){
					v.pb(j+1);
				}
			}
		}
		reverse(v.begin(), v.end());
		for(ll i=0; i<n; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
   
	SpicyWings;
}





















