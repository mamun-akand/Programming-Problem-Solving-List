// Problem: B. Beautiful Array
// Contest: Codeforces - Codeforces Round #816 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1715/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

//===============================================================
/* TYPES */
#define		ll	long long int
#define 	ld 	long double
#define		vi	vector <int>		
#define		vll	vector <ll>	
#define		vld	vector <ld>
#define		map	map <ll,ll>
#define		st	set <ll>

/* FUNCTIONS */
#define		pb	push_back
#define		eb	emplace_back

#define 	FAST	ios_base::sync_with_stdio(false);cin.tie(NULL);
#define 	pi	3.1415926535897932384626433832795

#define 	all(v)	v.begin(),v.end()
#define		setp(n)	fixed << setprecision(n)
#define 	endl	"\n"

#define 	pa	cout<<ans<<endl
#define 	py 	cout<<"YES"<<endl
#define 	pn 	cout<<"NO"<<endl

#define 	test	ll tc; cin>>tc; f1(t,1,tc)
#define		cs	cout << "Case " << t << ": ";

#define 	f0(i,s,e) for(ll i=s; i< e; i++)
#define 	f1(i,s,e) for(ll i=s; i<=e; i++)
#define 	fr(i,e,s) for(ll i=e-1; i>=s; i--)

void		vp(vector<ll> &v){for(auto it:v){cout << it;}}
//===============================================================


int main(){
    FAST;
    
	test{
		ll n, k, b, s; cin>>n>>k>>b>>s;
        vector<ll> v;
        
        ll val = (k*b) + (k-1);
        ll mex = val + ((k-1)*(n-1));
        
        ll ss = s;
        
        if(s>mex or s<(k*b)){
        	cout << -1 << endl;	
        }
        else{
	    	f0(i,0,n) {
	        	if(ss <= val){
	        		v.pb(ss); break;
	        	}
	        	
	        	if(s==0) break;
	        	
	        	if(i==0){
	        		v.pb(val);
	        		s = s-val;	
	        	}
	        	
	        	if(s > (k-1)){
	        		v.pb(k-1);
	        		s = s-(k-1);
	        	}
	        	else{
	        		v.pb(s); break;	
	        	} 	
	        }
	        
	        for(ll i=v.size()+1; i<=n; i++){
				v.pb(0);
			}
				
			sort(all(v));
				        	
	        for(ll i=0; i<v.size(); i++){
	        	if(i==0) cout << v[i];
	        	else cout <<" "<< v[i];
	        }
	        cout << endl;
		}
		v.clear();
	}
		
    return 0;
}


















