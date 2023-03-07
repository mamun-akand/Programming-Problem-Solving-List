// Problem: A. Magical Sticks
// Contest: Codeforces - Codeforces Round #654 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1371/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double
#define   vi	vector <int>		
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa   cout<<ans<<endl
#define   py   cout<<"YES"<<endl
#define   pn   cout<<"NO"<<endl

#define   Test ll tc; cin>>tc; f1(t,1,tc)
#define   cs   cout << "Case " << t << ": ";

#define   f0(i,s,e)   for(ll i=s; i< e; i++)
#define   f1(i,s,e)   for(ll i=s; i<=e; i++)
#define   fr(i,e,s)   for(ll i=e-1; i>=s; i--)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n, ans; cin>>n;
      
      if(n%2==0) ans = n/2;
      else ans = (n/2)+1;
      
      pa;
   }

   SpicyWings;
}
