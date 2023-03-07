// Problem: B. Rule of League
// Contest: Codeforces - Codeforces Round #821 (Div. 2)
// URL: https://codeforces.com/contest/1733/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

//===================================================================
//TYPES
#define		ll	long long int
#define 	ld 	long double
#define		vi	vector <int>		
#define		vll	vector <ll>	
#define		vld	vector <ld>
#define		mp	map <ll,ll>
#define		st	set <ll>
//FUNCTIONS
#define 	FAST	ios_base::sync_with_stdio(false);cin.tie(NULL);
#define 	pi	3.1415926535897932384626433832795
#define 	all(v)	v.begin(),v.end()
#define		setp(n)	fixed << setprecision(n)
#define 	endl	"\n"
#define		ln	cout<<endl;
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
//===================================================================

int main(){
 FAST;
	
 test{
	ll n,x,y; cin>>n>>x>>y;
		
	if(x==0 && y==0){
		cout << -1 << endl; continue;
	}
	else if(x>0 && y>0){
			cout << -1 << endl; continue;
	}
	else{
		ll non_zero = max(x, y);
			
		if(!((n-1)%non_zero == 0)){
			cout << -1 << endl; continue;
		}
		else{
			ll p = non_zero;
			ll v = 2;
			f1(i,1,n-1){
				if(i==1) cout << v;
				else cout <<" "<< v;
				p--;
				if(p==0){
					p = non_zero;
					v += non_zero;
				}
			}	
		}
		ln;
	}
 }
	
	rn;
}


















