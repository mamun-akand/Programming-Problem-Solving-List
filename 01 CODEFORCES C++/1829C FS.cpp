// URL: https://codeforces.com/contest/1829/problem/C

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

   	vll v1,v2,v3;

   	for(ll i=0; i<n; i++){
   		ll x; string s;

   		cin>>x;
   		cin>>s;
   		// cout << x << " " << s << endl;
   		if(s=="11") v1.pb(x);
   		else if (s=="10") v2.pb(x);
   		else if (s=="01") v3.pb(x);
   	}

   	// vp(v1);
   	// vp(v2);
   	// vp(v3);

   	ll x1=0, x2=0, x3=0;

   	if(v1.size() != 0) x1 = *min_element(all(v1));
   	if(v2.size() != 0) x2 = *min_element(all(v2));
   	if(v3.size() != 0) x3 = *min_element(all(v3));

   	// cout << x1 << " " << x2 << " " << x3 << endl;
   	
   	if(x1==0 && (x2==0 or x3==0)){
   		cout << -1 << endl;
   	}else{
   		if(x2==0 or x3==0) cout << x1 << endl;
   		else if(x1!=0 and x2!=0 and x3!=0) cout << min(x1,x2+x3) << endl;
   		else{
   			cout << x2+x3 << endl;
   		}
   	}

   }

   SpicyWings;
}





















