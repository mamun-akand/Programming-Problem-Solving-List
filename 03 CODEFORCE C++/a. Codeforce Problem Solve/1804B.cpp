// Problem: B. Vaccination
// URL: https://codeforces.com/contest/1804/problem/B
// Memory Limit: 512 MB
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
      ll p, pack, live, wait;
      cin>>p>>pack>>live>>wait;
      vll v(p);
      
      for(ll i=0; i<p; i++){
         cin>>v[i];
      }
      
      ll i=0, point=0;
      ll cnt=1;
      ll pack2=pack;
      ll total = v[point] + live + wait;

      while(1){
         if(v[i]<=total && pack2>0){
            i++;
            pack2--;  
         }
         else{
            cnt++;
            pack2=pack;
            point = i;
            total = v[point] + live + wait;
         }
         if(i==p) break;
      }
      cout << cnt << endl;
   }
   
   SpicyWings;
}