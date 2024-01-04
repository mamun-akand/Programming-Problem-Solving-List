// URL: https://vjudge.net/contest/577004#problem/AC
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
    
   ll n; cin>>n;
   vll v(n); for(auto &it:v) cin>>it;
   sort(all(v));

   ll mid = (n+1)/2-1;
   ll sum=0;

   for(ll i=0; i<n; i++){
      sum += abs(v[mid]-v[i]);
   }
   cout << sum << endl;
   
   SpicyWings;
}