// Problem: C. Traffic Light
// Contest: Codeforces - Codeforces Round  #828 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1744/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
      char ch; cin>>ch;
      
      vll g, chh;
      
      string s; cin>>s;
      
      for(ll i=0; i<s.size(); i++){
         if(s[i] == 'g') g.pb(i+1);
         if(s[i] == ch) chh.pb(i+1);
      }
      
      if(ch=='g'){
            cout << 0 << endl;
            continue;
      }
      
      ll sec = 0;
      
      for(ll i=0; i<chh.size(); i++){
         
         auto it = upper_bound(all(g), chh[i]);
         
         if(it == g.end()){
            if(sec < (n+g[0]-chh[i])) sec = n+g[0]-chh[i];
         }
         else{
            if(sec < (*it - chh[i])) sec = *it - chh[i]; 
         }
          
      }
      
      cout << sec << endl;      
   }
   

   SpicyWings;
}

















