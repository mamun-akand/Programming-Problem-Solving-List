// URL: https://codeforces.com/contest/1971/problem/C

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
   	ll a, b, x, y; cin>>a>>b>>x>>y;
   	if(a>b) swap(a,b);
   	
   	bool aa=0, bb=0;
   	
   	if(x>a && x<b){
   		aa = 1;
   	}
   	if(y>a && y<b){
   		bb = 1;
   	}
   	
   	// cout << aa << " " << bb << endl;
   	
   	if(aa != bb){
   		cout << "YES" << endl;
   	}else{
   		cout << "NO" << endl;
   	}
   }
   
   SpicyWings;
}





















