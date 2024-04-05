// URL: https://codeforces.com/contest/1937/problem/B

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
   	string s, ss; cin>>s>>ss;
   	
   	string ans = "";
   	ll flag=0;  	
   	   	
   	for(ll i=0; i<n; i++){
   		if(flag==0){
   			ans += s[i];
	   		if(i+1 < n && ss[i]=='0' && s[i+1]=='1'){
	   			flag=1;
	   			ans += ss[i];
	   		}
	   		else if(i==n-1){
	   			ans += ss[i];
	   		}
	   	}else{
	   		ans += ss[i];
	   	}
   	}
   	cout << ans << endl;
   	
   	ll cnt=1;
   	for(ll i=0; i<n-1; i++){
   		if(ss[i] == '0' && s[i+1]=='1'){
   			break;
   		}
   		else if(ss[i] == s[i+1]){
   			cnt++;
   		}else{
   			cnt=1;
   		}
   	}
   	cout << cnt << endl;
   	
   }
   
   SpicyWings;
}





















