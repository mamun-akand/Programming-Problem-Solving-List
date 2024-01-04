// URL: https://cses.fi/problemset/task/1629

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

bool comparator(pair<ll, ll> a, pair<ll, ll> b){
   return a.second < b.second;
}

int main(){
   FAST;
    
   ll n; cin>>n;
   vector < pair<ll, ll> > v;
   
   for(ll i=0; i<n; i++){
      ll x, y; cin>>x>>y;
      v.pb({x, y});
   }
   
   sort(all(v), comparator);
   
   ll cnt=1, last_end = v[0].second;
   for(ll i=0; i<n-1; i++){
      if(v[i+1].first >= last_end){
         cnt++;
         last_end = v[i+1].second;   
      }
   }
   cout << cnt << endl;
   
   SpicyWings;
}