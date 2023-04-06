// URL: https://codeforces.com/contest/1807/problem/G1

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
      ll n; cin>>n;
      vll v(n), pre(n+1);
      
      ll cnt=0;
      for(auto &it:v){
         cin>>it;
         if(it==1) cnt++;
      }
      
      sort(all(v));
      
      pre[1] = v[0];
      for(ll i=1; i<n; i++){
         pre[i+1] = v[i]+pre[i]; 
      }
     
      ll ans=1;
      if(n==1 && cnt==1) ans=1;
      else if(n==1 && cnt<1) ans=0;
      else if(n>1 && cnt<2) ans=0;
      else if(n>1 && cnt>=2){
         for(ll i=1; i<n; i++){
            if(v[i] > pre[i]){
               ans=0; break;
            }
         }
      }
      
      if(ans) py;
      else pn;
      // vp(v); ln; vp(pre);
   }
   
   SpicyWings;
}