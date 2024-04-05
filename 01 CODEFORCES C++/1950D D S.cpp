// URL: https://codeforces.com/contest/1950/problem/D
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

vector<bool> pre(1e5+9, 0);

int main(){
   FAST;
   
   vll v;
   
   for(ll i=1; i<=(ll)1e5; i++){
		string s = to_string(i);
		if(*max_element(all(s)) <= '1'){
			v.pb(i);
			// cout << i << " ";
		}
   }
   
   pre[1] = 1;
   for(ll i=1; i<=(ll)1e5; i++){
	   if(pre[i] == 1){
	   		for(auto val : v){
	   			// cout << i*val << endl;
	   			if(i*val > (ll)1e5) break;
	   			else pre[i*val] = 1;
	   		}
	   }
   }

   Test{
		ll n; cin>>n;
		if(pre[n]==1) cout << "YES" << endl;
		else cout << "NO" << endl;
   }
   
   SpicyWings;
}





















