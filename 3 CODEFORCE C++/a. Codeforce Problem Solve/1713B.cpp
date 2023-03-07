// Problem: B. Optimal Reduction
// Contest: Codeforces - Codeforces Round #812 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1713/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define		ll	long long int
#define 	ld 	long double
#define		vi	vector <int>		
#define		vll	vector <ll>	
#define		vld	vector <ld>
#define		map	map <ll,ll>
#define		st	set <ll>
//FUNCTIONS
#define 	FAST	ios_base::sync_with_stdio(false);cin.tie(NULL);
#define 	pi	3.1415926535897932384626433832795
#define 	all(v)	v.begin(),v.end()
#define		setp(n)	fixed << setprecision(n)
#define 	endl	"\n"
#define		line	cout<<endl;
#define		pb	push_back
#define		eb	emplace_back
#define		rn	return 0;

#define 	pa	cout<<ans<<endl
#define 	py 	cout<<"YES"<<endl
#define 	pn 	cout<<"NO"<<endl

#define 	test	ll tc; cin>>tc; f1(t,1,tc)
#define		cs	cout << "Case " << t << ": ";

#define 	f0(i,s,e) for(ll i=s; i< e; i++)
#define 	f1(i,s,e) for(ll i=s; i<=e; i++)
#define 	fr(i,e,s) for(ll i=e-1; i>=s; i--)
void		vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//==================================================================

int main(){
    FAST;
    
    test{
		ll n; cin>>n;
		vll v(n);
		
		f0(i,0,n){
			ll num; cin>>num;
			v.pb(num);
		}
		
		ll mex = *max_element(all(v));
		auto it = find(all(v), mex);
		
		string ans = "YES";
		
		for(auto pos=it-1; pos > v.begin(); pos--){
			if(*pos <= *(pos+1)) continue;
			else {ans = "NO"; break;}
		}
		
		for(auto pos=it+1; pos < v.end(); pos++){
			if(*pos <= *(pos-1)) continue;
			else {ans = "NO"; break;}
		}
		pa;
	}
    rn;
}

















