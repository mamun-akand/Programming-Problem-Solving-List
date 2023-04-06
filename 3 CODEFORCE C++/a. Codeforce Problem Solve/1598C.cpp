// URL: https://codeforces.com/problemset/problem/1598/C

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long double
#define   ull  unsigned long long
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

#define   Test    long long tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      map<ll, ll> mp;
      
      ll sum=0;
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         mp[x]++;
         sum+=x;
      }
      ll avg = (ll)sum/(ll)n;
      ll mx = sum - ((n-2)*avg);
      // cout << sum << endl;
      
      ll ans=0;
      for(auto it:mp){
         if(it.first > mx) break;
         auto it2 = mp.find(mx-it.first);
         
         if(it.first == mx/2){
            ll val = (((*it2).second-1) * (((*it2).second-1)+1))/2;
            ans += val;
         }
         else if(it2 != mp.end() && (*it2).first > it.first ){
            ans += it.second * (*it2).second;
         }
      }
      cout << (ull)ans << endl;
      
   }
   
   SpicyWings;
}