// Problem: D. Odd Queries
// URL: https://codeforces.com/contest/1807/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
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

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n, q; cin>>n>>q;
      vll v(n), con(n);
      
      for(ll i=0; i<n; i++){
         cin>>v[i];  
      }
   
      con[0]=v[0];
      for(ll i=1; i<n; i++){
         con[i] = con[i-1]+v[i];
      }
      
      while(q--){
         ll l, r, k; cin>>l>>r>>k;
         ll changed_sum = (r-l+1)*k;
         
         ll sum = 0;
         
         if(l>1){
            sum+=con[l-2];
         }
         if(r<n){
            sum+=(con[n-1]-con[r-1]);
           
         }
         sum = sum + changed_sum;
         // cout << sum << " ";
         if(sum%2==1) py;
         else pn;
      }
   }
   
   SpicyWings;
}