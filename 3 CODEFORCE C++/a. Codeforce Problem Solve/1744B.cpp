// Problem: B. Even-Odd Increments
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/contest/1744/problem/B
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
    
   ll n,q, od=0, ev=0, sum=0; cin>>n>>q;
   
   vll v;
   
   for(ll i=0; i<n; i++){
     ll x; cin>>x;
     v.pb(x);
     sum+=x;
     if(x%2==0) ev++;
     else od++;
   } 
   
   for(ll j=0; j<q; j++) {
       ll a,val; cin>>a>>val;
       
       if(a==0){
          sum+=(ev*val);
          if(val%2==1){
           od+=ev;
           ev = 0; 
          }
       }
       else if(a==1){
         sum+=(od*val);
         if(val%2==1){
          ev+=od;
          od=0; 
         }
       }
       cout << sum << endl;
       
   }
  
  }

  rn;
}

















