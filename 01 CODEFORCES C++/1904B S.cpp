// URL: https://codeforces.com/contest/1904/problem/B

#include<bits/stdc++.h>
using namespace std;

//====================================================================
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	

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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vector<pair<ll,ll>> v(n+1);
      
      for(ll i=1; i<=n; i++){
         ll x; cin>>x;
         v[i] = {x, i};
      }
      sort(all(v));
      
      vll pre(n+1);
      pre[0]=0;
      
      for(ll i=1; i<=n; i++){
         pre[i] = v[i].first + pre[i-1];
      }
      
      // vp(pre);
      
      vll ans(n+1, -1);
      stack<ll> st;
      
      for(ll i=1; i<=n; i++){
         st.push(v[i].second);
         if(i==n or v[i+1].first > pre[i]){
            while(!st.empty()){
               ans[st.top()] = i-1;
               st.pop();
            }
         }
      }
      for(ll i=1; i<=n; i++){
         cout << ans[i] << ' ';
      }
      ln;
   }
   
   
   SpicyWings;
}