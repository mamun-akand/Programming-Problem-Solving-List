// URL: https://codeforces.com/contest/1945/problem/D

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
		ll n, m; cin>>n>>m;
		vll a(n+1), b(n+1);
		
		for(ll i=1; i<=n; i++){
			cin>>a[i];
		}
		for(ll i=1; i<=n; i++){
			cin>>b[i];
		}		
		// vp(v);
		vll pre(n+2, 0);
		for(ll i=m, j=m; i>0; i--, j--){
			pre[i] = pre[i+1] + b[j];
		}
		
		ll right_seg=0;
		for(ll i=n; i>m; i--){
			right_seg += min(a[i], b[i]);
		}
		
		ll Min = LLONG_MAX;
		for(ll i=1; i<=m; i++){
			// debug(a[i]);
			// debug(pre[i+1]);
			Min = min(Min, pre[i+1]+a[i]);
		}
		// cout << Min << endl;
		cout << right_seg+Min << endl;
   }
   
   SpicyWings;
}














