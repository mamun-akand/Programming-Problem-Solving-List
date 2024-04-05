// URL: https://toph.co/p/escape-room-the-deadly-puzzle-game

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
   	ll n, total, solve;
   	cin>>n>>total>>solve;
   	
   	vll v(n); for(auto &it:v) cin>>it;
   	sort(all(v));
   	
   	for(ll i=1; i<n; i++){
   		v[i] += v[i-1];
   	}
   	
   	auto it = upper_bound(all(v), total) - v.begin();
   	if(it>=solve){
   		cout << "ESCAPE THE ROOM!" << endl;
   	}else{
   		cout << "OPPS!" << endl;
   	}
   }
   
   SpicyWings;
}





















