// URL: https://codeforces.com/contest/1971/problem/B

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
   	string ss; cin>>ss;
   	string s = ss;
   	
   	for(ll i=1; i<s.size(); i++){
   		if(s[i] != s[i-1]){
   			swap(s[i], s[i-1]);
   			break;
   		}
   	}	
   	
   	if(s != ss){
   		cout << "YES" << endl;
   		cout << s << endl;
   	}else{
   		cout << "NO" << endl;
   	}
   }
   
   SpicyWings;
}





















