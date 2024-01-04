// URL: https://codeforces.com/contest/1405/problem/B

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
      vll v; 
      
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         if(i==0) {v.pb(x); continue;}
         
         if(v[v.size()-1] > 0){
            ll y = v.back() + x;
            v.pop_back();
            v.pb(y);
         }
         else if(v[v.size()-1]< 0 && x < 0){
            ll z = v.back() + x;
            v.pop_back();
            v.pb(z);
         }
         else{
            v.pb(x);
         }
      }
      
      // vp(v);
      // ln;
      
      ll i=0, sum=0;
      
      while(i<v.size()){
         if(v[i] < 0)sum += v[i];
         i++;
      }
      
      cout << abs(sum) << endl;
   }
   
   
   
   SpicyWings;
}