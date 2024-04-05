// URL: https://codeforces.com/contest/1950/problem/B

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
   		string a = "##", b="..";
   		
   		for(ll i=1; i<=n; i++){
   			if(i%2==1){
	   			string s="";
	   			for(ll j=1; j<=n; j++){
		   			if(j%2==1){
		   				cout << a;
		   				s += a;
		   			}else{
		   				cout << b;
		   				s += b;
		   			}
	   			}ln;
	   			cout << s << endl;
   			}else{
   				string s="";
	   			for(ll j=1; j<=n; j++){
		   			if(j%2==1){
		   				cout << b;
		   				s += b;
		   			}else{
		   				cout << a;
		   				s += a;
		   			}
	   			} ln;
	   			cout << s << endl;
   			}
   		}
   }
   
   SpicyWings;
}





















