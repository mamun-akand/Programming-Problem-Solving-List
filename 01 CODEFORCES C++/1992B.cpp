// URL: https://codeforces.com/contest/1992/problem/B

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
   	ll a, b; cin>>a>>b;
   	vll v(b);
   	
   	ll Max = 0, sum = 0;
   	for(ll i=0; i<b; i++){
   		cin>>v[i];
   		sum += v[i];
   		Max = max(Max, v[i]);
   	}
   	sum -= Max;
   	sum *= 2;
   	sum -= (b-1);
   	cout << sum << endl;
   }
   
   SpicyWings;
}





















