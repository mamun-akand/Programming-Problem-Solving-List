// URL: https://atcoder.jp/contests/abc157/tasks/abc157_c

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
   
   ll n, m; cin>>n>>m;
   vll v(n+1, -1);
   
   bool flag=0;
   for(ll i=1; i<=m; i++){
   	ll a, b; cin>>a>>b;
   	if(v[a] != -1 and v[a] != b) flag=1;
   	v[a] = b;
   }
   
   if(n==1){
		if(v[1] == -1) v[1]=0;
	}
	else{
		if(v[1] == 0) flag=1;
		else if(v[1] == -1) v[1] = 1;  
	}
	
	if(flag) {cout << -1 << endl; return 0;}
	
	for(ll i=1; i<=n; i++){
		if(v[i] == -1) cout << 0;
		else cout << v[i];
	}
   
   SpicyWings;
}





















