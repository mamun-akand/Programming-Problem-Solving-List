// URL: https://codeforces.com/contest/1950/problem/E
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
   	string s; cin>>s;
   	
   	vll div;
   	for(ll i=1; i*i <= n; i++){
   		if(n%i==0){
   			div.pb(i);
   			if(i != n/i) div.pb(n/i);
   		}
   	}
   	
   	sort(all(div));
   	
   	for(ll i=0; i<div.size(); i++){
   		unordered_map<string, ll> mp;
   		for(ll j=0; j<=n-div[i]; j+=div[i]){
   			string sub = s.substr(j, div[i]);
   			mp[sub]++;
   		}
   		
   		if(mp.size()==1) {cout << div[i] << endl; break;}
   		else if(mp.size()==2){
   			auto it  = mp.begin();
   			auto itt = ++mp.begin();
   			string s1 = (*it).first;
   			string s2 = (*itt).first;
   			
   			ll cnt=0;
   			for(ll i=0; i<s1.size(); i++){
   				if(s1[i] != s2[i]) cnt++;
   			}
   			if(cnt == 1 && ((*it).second == 1 or (*itt).second == 1)){cout << div[i] << endl; break;}
   		}
   	}	
   }
   
   SpicyWings;
}





















