// Problem: A. Two Elevators
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

//====================================================================
/* TYPES  */
#define		ll			long long int
#define 	ld 			long double
#define		vi			vector <int>		
#define		vll			vector <ll>	
#define		vld			vector <ld>
#define		map			map <ll, ll>
#define		st			set <ll>

/* FUNCTIONS */
#define 	f0(i,s,e)	for(ll i=s; i< e; i++)
#define 	f1(i,s,e)	for(ll i=s; i<=e; i++)
#define 	fr(i,e,s)	for(ll i=e-1; i>=s; i--)

#define		pb			push_back
#define		eb			emplace_back
#define		setp(n)		fixed << setprecision(n)
#define 	endl 		"\n"

#define 	FAST 		ios_base::sync_with_stdio(false);cin.tie(NULL);
#define 	pi 			3.1415926535897932384626433832795
#define 	all(v)		v.begin(),v.end()

#define 	ap			cout<<ans<<endl
#define 	yp 			cout<<"YES"<<endl
#define 	np 			cout<<"NO"<<endl

#define 	test		ll tc; cin>>tc; f1(t,1,tc)
#define		cs			cout << "Case " << t << ": ";
void		vp(vector<ll> &v)	{for(auto it:v){cout << it << endl;}}
//====================================================================


int main(){
    FAST;
    
	test{
		ll a, b, c; cin>>a>>b>>c;	
		
		ll t1=0, t2=0, tm=0, ans=0;
		
		t1 = abs(a-1);
		
		tm = abs(b-c);
		t2 = tm + abs(c-1);
			
		
		if(t1==t2) ans = 3;
		if(t1<t2) ans = 1 ;
		if(t1>t2) ans = 2;
		
		cout << ans << endl;
	}
	
    return 0;
}

















