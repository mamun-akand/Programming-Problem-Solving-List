// URL: https://codeforces.com/contest/2009/problem/C

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
		ll step_x  = ceil(a/(double)c);
		ll step_y  = ceil(b/(double)c);
		
		ll Min = min(step_x, step_y);
		ll ans = Min*2;
		
		step_x -= Min;
		step_y -= Min;
		
		// debug(ans);
		// debug(step_x);
		// debug(step_y);
		
		if(step_x != 0){
			ans += (2*step_x) - 1;
		}else if(step_y != 0){
			ans += (2*step_y);
		}
		cout << ans << endl;
	}
   
	SpicyWings;
}





















