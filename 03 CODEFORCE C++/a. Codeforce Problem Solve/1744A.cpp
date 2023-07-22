// Problem: A. Number Replacement
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/0
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
    ll n; cin>>n;
    
    ll a[n];
    
    for(ll i=0; i<n; i++){
      cin>>a[i];
    }
    
    string s; cin>>s;
    
    ll flag=0;
    
    for(ll i=0; i<n; i++){
      for(ll j=i+1; j<n; j++){
        if(a[i] == a[j] && s[i] != s[j]){
          flag=1; break;
        }
      }
    }
    
    if(flag) cout << "NO" << endl;
    else cout << "YES" << endl;
    
  }

  
  rn;
}

















