// Problem: C. Traffic Light
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
    ll n; cin>>n;
    char c; cin>>c;
    
    string s; cin>>s;
    
    vll cc, gg;
    
    for(ll i=0; i<s.size(); i++){
      if(s[i]=='c') cc.pb(i+1);  
      else if(s[i]=='g') gg.pb(i+1);  
    }
    
    sort(all(cc));
    sort(all(gg));
    
    ll t;
    
    for(ll i=0; i<cc.size(); i++){
      
      auto it = upper_bound(gg.begin(), gg.end(), cc[i]);
      
    }
    
  }

  
  rn;
}

















