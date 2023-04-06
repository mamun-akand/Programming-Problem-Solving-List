// URL: https://codeforces.com/contest/1810/problem/B

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
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
#define   sp(s)   while(!s.empty()){cout << s.front() << " "; s.pop();}
// void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vll v;
      
      if(n%2==0){
         cout << -1 << endl; continue;
      }
      
      ll flag = 0;
      
      while(1){
         if(n==3) flag=1;
         n = n/2;
         if(n==0) break;
         // cout << n << endl;
         if(n%2==0){
            v.pb(1);
            n++;  
         }
         else{
            v.pb(2);
         }

      }
      
      if(flag==0){
         cout << -1 << endl; continue;  
      }
      
      reverse(all(v));
      cout << v.size() << endl;
      vp(v); ln;
   }
   
   SpicyWings;
}