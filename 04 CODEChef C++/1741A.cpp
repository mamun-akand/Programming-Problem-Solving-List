// Problem: A. Compare T-Shirt Sizes
// Contest: Codeforces - Codeforces Round #826 (Div. 3)
// URL: https://codeforces.com/contest/1741/problem/0
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
    string s, ss, ans; cin>>s>>ss;
    
    ll last = s.size()-1;
    ll last2 = ss.size()-1;
    
    if(s==ss) ans = "=";
    
    else if(s[last] == 'S' && ss[last2]=='M') ans = "<";
    else if(s[last] == 'M' && ss[last2]=='S') ans = ">";
    
    else if(s[last] == 'S' && ss[last2]=='L') ans = "<";
    else if(s[last] == 'L' && ss[last2]=='S') ans = ">";
    
    else if(s[last] == 'M' && ss[last2]=='L') ans = "<";
    else if(s[last] == 'L' && ss[last2]=='M') ans = ">";
    
    else if(s[last] == ss[last2]){
      if(s.size() > ss.size() && s[last] == 'S') ans = "<";
      if(s.size() < ss.size() && s[last] == 'S') ans = ">";
      if(s.size() > ss.size() && s[last] == 'L') ans = ">";
      if(s.size() < ss.size() && s[last] == 'L') ans = "<";
    }
    
    cout << ans << endl;
    
  }

  
  rn;
}

















