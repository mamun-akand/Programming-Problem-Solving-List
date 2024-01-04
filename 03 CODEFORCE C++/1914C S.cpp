// URL: https://codeforces.com/contest/1914/problem/C

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
const ll N = 2e5+100;
ll a[N], b[N];

bool mono(ll value){
   ll Max=0, sum=0, temp_max=0;
   for(ll i=1; i<=min(n, k); i++){
      sum += a[i];
      temp_max = max(temp_max, b[i]);
      ll tmp = sum + temp_max*(k-i);
      Max = max(Max, tmp);
   }
   return Max >= value; 
}

int main(){
   FAST;
   
   Test{
      cin>>n>>k;
      for(ll i=1; i<=n; i++){
         cin >> a[i];
      }
      for(ll i=1; i<=n; i++){
         cin >> b[i];
      }
      
      ll L = 1, R = 3e8, ans=0;
      while(L<=R){
         ll mid = L + (R-L)/2;
         if(mono(mid)){
            ans = mid;
            L = mid+1;
         }
         else{
            R = mid-1;
         }
      }
      cout << ans << endl;
   }
    
   SpicyWings;
}