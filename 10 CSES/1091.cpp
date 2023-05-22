// URL: https://cses.fi/problemset/task/1091

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
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

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

int main(){
   FAST;
    
   ll T, C; cin>>T>>C;
   multiset<ll> TT;
   vll CC(C);
   
   for(ll i=0; i<T; i++){
      ll x; cin>>x;
      TT.insert(x);
   }
   for(auto &it:CC) cin>>it;
   
   for(ll i=0; i<C; i++){
      auto it = TT.lower_bound(CC[i]);

      if(*it == CC[i]){
         cout << *it << endl;
         TT.erase(it); 
      }
      else if(it != TT.begin()){
         advance(it, -1);
         cout << *it << endl;
         TT.erase(it);
      }
      else cout << -1 << endl;
   }
   
   SpicyWings;
}