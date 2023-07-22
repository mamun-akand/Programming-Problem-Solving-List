// Problem: 575 - Skew Binary
// Contest: UVa Online Judge
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=516
// Memory Limit: 32 MB
// Time Limit: 3000 ms

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

#define 	pa			cout<<ans<<endl
#define 	py 			cout<<"YES"<<endl
#define 	pn 			cout<<"NO"<<endl

#define 	test		ll tc; cin>>tc; f1(t,1,tc)
#define		cs			cout << "Case " << t << ": ";
void		vp(vector<ll> &v)	{for(auto it:v){cout << it << endl;}}
//====================================================================


int main(){
    FAST;
    
	// test{}
	while(1){
		string s; cin>>s;
		if(s=="0") break;
		
		ll sum=0, cnt=1;
		
		fr(i,s.size(),0){
			sum += 	((ll)(s[i]-'0')) * (pow(2, cnt)-1);
			cnt++;	
		}
		cout << sum << endl;
	}
	
    return 0;
}

















