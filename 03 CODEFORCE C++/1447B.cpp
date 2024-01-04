// URL: https://codeforces.com/contest/1447/problem/B

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
      ll n, m; cin>>n>>m;
      vll v;
      ll zero=0, neg=0;
      for(ll i=0; i<n; i++){
         for(ll j=0; j<m; j++){
            ll x; cin>>x;
            if(x == 0) zero++;
            if(x < 0) {neg++; x=x*-1;}
            v.pb(x);
         }
      }
      sort(all(v));
      if((zero+neg)%2==1) v[0] = v[0]*-1;
      ll sum=0;
      for(ll i=0; i<v.size(); i++){
         sum += v[i];
      }
      cout << sum << endl;
   }
   
   SpicyWings;
}