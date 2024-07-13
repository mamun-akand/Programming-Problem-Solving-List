// URL: https://codeforces.com/contest/1971/problem/D

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
   	string s; cin>>s;
   	string ss = "";
   	
   	ll cur = s[0];
   	for(ll i=1; i<s.size(); i++){
   		if(cur == s[i]) continue;
   		else{
   			ss.pb(cur);
   			cur = s[i];
   		}
   	}
   	ss.pb(cur);
   	// cout << ss << endl;
   	
   	bool x = 0;
   	
   	for(ll i=1; i<ss.size(); i++){
   		if(ss[i-1] == '0' && ss[i] == '1'){
   			x = 1; break;
   		}
   	}
   	
   	if(x == 1){
   		cout << ss.size() - 1 << endl;
   	}else{
   		cout << ss.size() <<  endl;
   	}
   }
   
   SpicyWings;
}





















