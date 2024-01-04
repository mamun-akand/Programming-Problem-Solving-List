// URL: https://codeforces.com/problemset/problem/1612/C

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

ll k, x;

ll get_sum(ll n){
   return (n*(n+1))/2;
}
ll partial_sum(ll k_next, ll line){
   return get_sum(k_next) - get_sum(k_next-(line-k));
}

bool mono(ll line){
   ll sum = 0;
   if(line <= k){
      sum = get_sum(line);
   }
   else{
      sum = get_sum(k);
      sum += partial_sum(k-1, line);
   }

   return sum >= x;
}

int main(){
   FAST;
    
   Test{
      cin>>k>>x;
      ll l=1, r=2*k-1, ans=2*k-1;
      while(l<=r){
         ll mid = l+(r-l)/2;
         if(mono(mid)){
            ans = mid;
            r = mid-1;
         }
         else{
            l = mid+1;
         }
      }
      cout << ans << endl;
   } 
   
   SpicyWings;
}