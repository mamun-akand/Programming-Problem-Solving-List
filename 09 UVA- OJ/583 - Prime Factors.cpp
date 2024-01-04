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
		ll num; cin>>num;
		ll n = num;
		
		if(num==0) return 0;
		if(num<0) n = n*(-1);
		
		vll v;
		
		for(ll i=2; i*i <= n; i++){
			while(n%i==0){
				v.pb(i);
				n /= i;	
			}
		}
		if(n>1) v.pb(n);
		
		if(num<0){
			cout << num <<" = -1 x ";
			cout << v[0];
			for(ll i=1; i<v.size(); i++){
				cout <<" x "<< v[i];
			}
			cout << endl;
		}
		else{
			cout << num <<" = ";
			cout << v[0];
			for(ll i=1; i<v.size(); i++){
				cout <<" x "<< v[i];
			}
			cout << endl;
		}
		
	}
	
    return 0;
}

















