// URL: https://codeforces.com/problemset/problem/1352/C
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

ll n, k; 
bool monotonic(ll x){
   ll not_divisible = x - (x/n);
   return not_divisible >= k;
}

int main(){
   FAST;
   FAST;
   
   Test{
      cin>>n>>k;
      ll l=0, r=2e9, ans=0;
      
      while(l<=r){
         ll mid = l + (r-l)/2;
         if(monotonic(mid)){
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