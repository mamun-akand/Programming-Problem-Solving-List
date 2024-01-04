// URL: https://codeforces.com/contest/1904/problem/A

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
      ll a,b,k1,k2,q1,q2;
      cin>>a>>b>>k1>>k2>>q1>>q2;
      
      set<pair<ll,ll>>s1;
      set<pair<ll,ll>>s2;
      
      s1.insert({k1-a, k2-b});
      s1.insert({k1-a, k2+b});
      s1.insert({k1+a, k2-b});
      s1.insert({k1+a, k2+b});
      s1.insert({k1+b, k2+a});
      s1.insert({k1-b, k2+a});
      s1.insert({k1+b, k2-a});
      s1.insert({k1-b, k2-a});
      
      s2.insert({q1-a, q2-b});
      s2.insert({q1-a, q2+b});
      s2.insert({q1+a, q2-b});
      s2.insert({q1+a, q2+b});
      s2.insert({q1+b, q2+a});
      s2.insert({q1-b, q2+a});
      s2.insert({q1+b, q2-a});
      s2.insert({q1-b, q2-a});
      
      map<pair<ll,ll>, ll> mp;
      
      for(auto [x,y]:s1){
         mp[{x,y}]++;   
      }
      for(auto [x,y]:s2){
         mp[{x,y}]++;   
      }
      ll cnt=0;
      for(auto [x,y]:mp){
         if(y==2) cnt++;
      }
      cout << cnt << endl;
   }
   
   SpicyWings;
}