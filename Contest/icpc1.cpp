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

#define   Test    ll tc; cin>>tc; f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      
      ll n, k; cin>>n>>k;
      
      vll v;
      vll v2(n);
      vll v3(n);
   
      
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         v.pb(x);
      }
      
      for(ll i=0; i<n; i++){
         if(i==0){
             v2[i] = v[i];
             continue;  
         }
         v2[i] = v2[i-1]+v[i];
      }
      
      ll z;
             
      for(ll i=0; i<n; i++){
         
         if(i==0){
             z = v2[i]+v[i];
             v3[i] = z;
             continue;  
         }
         
         if(z >= v2[i]){
             z = v3[i-1] + v[i];
             v3[i] = z;
             continue;
         }
         
         if(v3[i-1] < v2[i]){
            z = v2[i]+v[i];
            v3[i] = z;
         }
         
      }
      
      
      ll dif = abs( v3[n-1] - v2[n-1] );
      
      cs; cout << v2[n-1]+(dif*(k-1));
      ln;
       
   }
   
   SpicyWings;
}

















