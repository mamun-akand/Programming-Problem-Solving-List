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

#define   Test    ll tc; cin>>tc; f1(t,1,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,s,e)   for(ll i=s; i< e; i++)
#define   f1(i,s,e)   for(ll i=s; i<=e; i++)
#define   fr(i,e,s)   for(ll i=e-1; i>=s; i--)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vll v;
      
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         if(i==0) v.pb(x);
         else if(v.back() != x) v.pb(x);
      }
      
      ll cnt=0;
      
      if(v.size()==1){
         py; continue;
      }
      
      if(v[0] < v[1]) cnt++;
      if(v[v.size()-1] < v[v.size()-2]) cnt++;
      
      if(v.size()>2){
         for(ll i=1; i<v.size()-1; i++){
            if(v[i-1] > v[i] and v[i+1] > v[i]) cnt++;
         }
      }
      
      
      if(cnt==1) py;
      else pn;
         
   }
   
   SpicyWings;
}
