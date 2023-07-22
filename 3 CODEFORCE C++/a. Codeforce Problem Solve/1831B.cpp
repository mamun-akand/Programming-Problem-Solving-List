// URL: https://codeforces.com/contest/1831/problem/B

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
    
   Test{
      ll n; cin>>n;
      vll v1(n); for(auto &it:v1) cin>>it;
      vll v2(n); for(auto &it:v2) cin>>it;
      
      map<ll, ll> mp1;
      map<ll, ll> mp2;
      
      ll L=0, cnt=0;
      for(ll R=0; R<n; R++){
         if(v1[L] == v1[R]) cnt++;
         
         if(v1[L] != v1[R] || R==n-1){
            auto it = mp1.find(v1[L]);
            if(it == mp1.end() || (*it).second < cnt){
               mp1[v1[L]] = cnt;
            }
            cnt = 1;;
            L=R;
         }
      }
      if(mp1.find(v1[n-1])==mp1.end()) mp1[v1[L]] = cnt;
      
      L=0; cnt=0;
      for(ll R=0; R<n; R++){
         if(v2[L] == v2[R]) cnt++;
         
         if(v2[L] != v2[R] || R==n-1){
            auto it = mp2.find(v2[L]);
            if(it == mp2.end() || (*it).second < cnt){
               mp2[v2[L]] = cnt;
            }
            cnt = 1;;
            L=R;
         }
      }
      if(mp2.find(v2[n-1])==mp2.end()) mp2[v2[L]] = cnt;
      
      ll total = 0;
      
      for(auto it:mp1){
         ll t = it.second;
         
         auto it2 = mp2.find(it.first);
         if(it2 != mp2.end()){
            t += (*it2).second;
         }
         if(t>total) total = t;
      }
      
      for(auto it:mp2){
         ll t = it.second;
         
         auto it2 = mp1.find(it.first);
         if(it2 != mp1.end()){
            t += (*it2).second;
         }
         if(t>total) total = t;
      }
      
      cout << total << endl;
   }
   
   SpicyWings;
}