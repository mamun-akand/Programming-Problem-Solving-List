// URL: https://codeforces.com/contest/1762/problem/B

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
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vector< pair<ll, ll> > v, ans;
      
      for(ll i=1; i<=n; i++){
         ll x; cin>>x;
         v.pb({x, i});
      }
      sort(all(v));
      
      for(ll i=1; i<n; i++) {
         if(v[i].first%v[i-1].first != 0) {
            ll x = ((v[i].first/v[i-1].first+1) * v[i-1].first) - v[i].first;
            v[i].first += x;
            ans.pb({v[i].second, x});
         }
      }
      
      cout << ans.size() << endl;
      
      for(auto[a, b]:ans){
         cout << a << " " << b << endl;
      }
   }
   
   SpicyWings;
}