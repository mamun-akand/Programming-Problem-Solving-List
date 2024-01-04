// URL: https://cses.fi/problemset/task/1161
#include<bits/stdc++.h>
using namespace std;

//====================================================================
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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================

int main(){
   FAST;
    
   ll x, n; cin>>x>>n;
   priority_queue<ll, vector<ll>, greater<ll>> pq;
   for(ll i=0; i<n; i++){
      ll x; cin>>x;
      pq.push(x);      
   }
   
   ll ans=0;
   while(pq.size() > 1){
      ll small_1 = pq.top();
      pq.pop();
      ll small_2 = pq.top();
      pq.pop();
      
      ans += small_1+small_2;
      pq.push(small_1+small_2);
   }
   cout << ans << endl;

   SpicyWings;
}