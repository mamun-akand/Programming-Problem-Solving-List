// URL: https://vjudge.net/contest/625653#problem/D

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

ll additional(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3, ll x4, ll y4){
		ll xMin = max(x1,x3);
		ll xMax = min(x2,x4);
		
		ll yMin = max(y1,y3);
		ll yMax = min(y2,y4);
		
		ll width =  max(0LL, xMax-xMin);
		ll length = max(0LL, yMax-yMin);
		
		return width*length;
}

int main(){

   Test{
   	
   	ll a, b, c, d; cin>>a>>b>>c>>d;
   	ll x, y, m, n; cin>>x>>y>>m>>n;
   	
   	ll p = sqrt((c-a)*(c-a));
   	// debug(p);
   	
   	ll q = sqrt((b-d)*(b-d));
   	// debug(q);
   	
   	ll o = sqrt((m-x)*(m-x));
   	// debug(o);
   	
   	ll k = sqrt((n-y)*(n-y));
   	// debug(k);
   	
   	ll area1 = p*q; 
   	ll area2 = o*k; 
   	
   	ll val = additional(a, b, c, d, x, y, m, n);
   	// cout << val << endl;
   	
   	cout << (area1-val) + area2 << endl;
   	
   }
   
   SpicyWings;
}





















