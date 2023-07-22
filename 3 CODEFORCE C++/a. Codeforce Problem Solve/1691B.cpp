// URL: https://codeforces.com/contest/1691/problem/B

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
      map<ll, ll> mp;
      
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         mp[x]++;
      }
      
      bool flag=1;
      
      for(auto it:mp){
         if(it.second == 1){
            flag=0; break;
         } 
      }
      
      if(flag==0){
         cout << -1 << endl;
         continue;
      }
      
      ll L=1, R=0;
      vll ans;
      
      for(auto it:mp){
         
         ll cnt = it.second;
         
         if(cnt%2 == 0){
            R = L + (cnt-1);
            bool flag=0;
            for(ll i=L; i<=R; i++){
               if(flag==0){
                  ans.pb(i+1);
                  flag=1;
               }
               else{
                  ans.pb(i-1);
                  flag=0;
               }
            }
            L = R+1;
         }
         
         else{
            R = L + (cnt-1);
            ans.pb(R);
            for(ll i=L; i<R; i++){
               ans.pb(i);
            }
            L = R+1;
         }
      }
      
      vp(ans); ln;
   }
   
   SpicyWings;
}