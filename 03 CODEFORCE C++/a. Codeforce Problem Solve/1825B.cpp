// URL: https://codeforces.com/contest/1825/problem/B

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
      if(n>m) swap(n, m);
            
      vll v(n*m); for(auto &it:v) cin>>it;
      sort(all(v));
      
      ll sum1=0;
      sum1 += (v[v.size()-2] - v[0])*(n-1);
      sum1 += (v[v.size()-1] - v[0])*((m-1)*n);
      
      ll sum2=0;
      sum2 += (v[v.size()-1] - v[0])*((m-1)*n);
      sum2 += (v[v.size()-1] - v[1])*(n-1);
      
      cout << max(sum1, sum2) << endl;
   }
   
   SpicyWings;
}