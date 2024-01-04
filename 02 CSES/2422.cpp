// URL: https://cses.fi/problemset/task/2422

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
ll n;
bool mono(ll mid_element){
   ll cnt=0;
   
   for(ll j=1; j<=n; j++){
      cnt += min(n, mid_element/j);
   }
   return cnt >= (n*n)/2+1;
}

int main(){
   FAST;
    
   cin>>n;
   
   ll l=1, r=n*n, ans=0;
   while(l<=r){
      ll mid=l+(r-l)/2;
      if(mono(mid)){
         ans = mid;
         r = mid-1;
      }  
      else{
         l = mid+1;
      } 
   }
   cout << ans << endl;
   
   SpicyWings;
}