// URL: https://codeforces.com/contest/1945/problem/A

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
		ll a, b, c; cin>>a>>b>>c;
		ll rem = (b%3);
		
		if(rem != 0) rem = 3-rem;
		
		if(rem > c) cout << -1 << endl;
		else{
			ll cnt = 0;
			c -= rem;
			cnt += a;
			cnt += ceil(b/3.0);
			cnt += ceil(c/3.0);
			cout << cnt << endl;
		}
   }
   
   SpicyWings;
}