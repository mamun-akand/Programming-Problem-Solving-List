// URL: https://codeforces.com/contest/1829/problem/D
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
   	ll n, m; cin>>n>>m;  
   	 	
   	if(n == m) {cout << "YES" << endl; continue;}
   	
   	bool flag=0;
   	
   	queue<ll> q;
   	
   	while(n%3==0){
   		n = n/3;
   		if(n==m or 2*n==m) {flag=1; break;}
   		q.push(n);
   		q.push(2*n);
   		
   		if(q.size()){
   		n = q.front();
   	 	q.pop();
   		}
   	}
   	
   	
   	if(flag) cout << "YES" << endl;
   	else cout << "NO" << endl;
   }
   
   SpicyWings; 
}





















