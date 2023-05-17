// URL: https://cses.fi/problemset/task/1084

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
    
   ll n, m, k; cin>>n>>m>>k;
   vll v1(n), v2(m);
   for(auto &it:v1) cin>>it;
   for(auto &it:v2) cin>>it;
     
   sort(all(v1));
   sort(all(v2));
   
   ll cnt=0;
   
   ll L=0, R=0;
   while(R<m && L<n){
      if(v1[L] >= v2[R]-k && v1[L] <= v2[R]+k){
         cnt++;
         L++;
         R++;
      }
      else if(v1[L] < v2[R]-k) L++;
      else if(v1[L] > v2[R]+k) R++;
   }
   
   cout << cnt << endl;
   
   SpicyWings;
}