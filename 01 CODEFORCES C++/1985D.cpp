// URL: https://codeforces.com/contest/1985/problem/D

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
   	char arr[n][m];
   	
   	for(ll i=0; i<n; i++){
   		for(ll j=0; j<m; j++){
   			cin>>arr[i][j];
   		}
   	}
   	
   	ll Max=0, end1=0, row=0;
   	
   	for(ll i=0; i<n; i++){
   		ll cnt=0, end2=0;
   		for(ll j=0; j<m; j++){
   			if(arr[i][j] == '#') {cnt++; end2=j;}
   			// else break;
   		}
   		if(cnt > Max) {Max = cnt; end1 = end2; row=i+1;}
   	}
   	// cout << Max << " " << end1 << endl;
   	cout << row << " " << end1+1 - (Max/2) << endl;
   }
   
   SpicyWings;
}





















