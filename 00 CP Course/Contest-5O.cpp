// URL: https://vjudge.net/contest/576547#problem/O

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
    
   ll n; cin>>n;
   ll p1; cin>>p1;
   queue<ll> q1;
   for(ll i=0; i<p1; i++){
      ll x; cin>>x;
      q1.push(x);
   }
   ll p2; cin>>p2;
   queue<ll> q2;
   for(ll i=0; i<p2; i++){
      ll x; cin>>x;
      q2.push(x);
   }   
   queue<ll> q11 = q1, q22 = q2;
   
   ll cnt=0; ll Max = 1e6+9;
   
   while(cnt<Max){
      ll f1 = q11.front();
      q11.pop();
      ll f2 = q22.front();
      q22.pop();
      
      if(f1>f2){
         q11.push(f2);
         q11.push(f1);
      }
      else{
         q22.push(f1);
         q22.push(f2);
      }
      cnt++;
      
      if(q11.empty()) {cout << cnt << " 2" << endl; return 0;}
      else if(q22.empty()) {cout << cnt << " 1" << endl; return 0;}
   }
   cout << -1 << endl;
   
   SpicyWings;
}