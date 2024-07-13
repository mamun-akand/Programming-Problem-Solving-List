// URL: https://codeforces.com/contest/1829/problem/B

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
   	ll n; cin>>n;
   	vll v(n);
   	for(ll i=0; i<n; i++){
   		cin>>v[i];
   	}
   	ll Max=0;
   	ll cnt=0;
   	
   	for(ll i=0; i<n; i++){
   		if(v[i] == 0) {
   			cnt++; 
   		}
   		else cnt=0;
   		Max = max(Max, cnt);
   		// cout << Max << endl;
   	}
   	cout << Max << endl;
   }
   
   SpicyWings;
}





















// URL: https://codeforces.com/contest/1829/problem/B

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
   	ll n; cin>>n;
   	vll v(n);
   	for(ll i=0; i<n; i++){
   		cin>>v[i];
   	}
   	ll Max=0;
   	ll cnt=0;
   	
   	for(ll i=0; i<n; i++){
   		if(v[i] == 0) {
   			cnt++; 
   		}
   		else cnt=0;
   		Max = max(Max, cnt);
   		// cout << Max << endl;
   	}
   	cout << Max << endl;
   }
   
   SpicyWings;
}





















