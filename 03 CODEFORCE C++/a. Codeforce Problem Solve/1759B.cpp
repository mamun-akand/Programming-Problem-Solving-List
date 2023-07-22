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
      ll m, s, sum=0; cin>>m>>s;
      vll v; 
      
      for(ll i=0; i<m; i++){
         ll x; cin>>x;
         v.pb(x);
         sum += x;
      }
      
      ll Max = *max_element(all(v));
      
      sum = ((Max*(Max+1))/2) - sum;
      s = s-sum;
      
      if(s==0) {py; continue;}
      else{
         for(ll j=Max+1; ; j++){
            s = s - j;
            if(s==0) {py; break;}
            if(s<0) {pn; break;}
         }
      }
      
   }

   SpicyWings;
}

















