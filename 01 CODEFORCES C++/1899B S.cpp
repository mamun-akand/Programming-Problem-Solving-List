// URL: https://codeforces.com/contest/1899/problem/B#
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
const ll N = 150000+9;
ll n;
vll v(N);

vll div_count(ll n){
   vll v;
   for(ll i=1; i*i<=n; i++){
       if(n%i==0){
           v.pb(i);
           if(n/i != i){
               v.pb(n/i);
           }
       }
   }
   return v;
}

ll max_dif_count(ll s){
   vll sum_vec;
   ll sum=0, cnt=0;
   for(ll i=1; i<=n; i++){
      sum += v[i];
      cnt++;
      if(cnt==s){
         sum_vec.pb(sum);
         sum=0;
         cnt=0;
      }
   }
   ll Max = *max_element(all(sum_vec));
   ll Min = *min_element(all(sum_vec));
   return abs(Max-Min);
}

int main(){
   FAST;
    
   Test{
      cin>>n;
      for(ll i=1; i<=n; i++){
         cin>>v[i];
      }
      vll divisors = div_count(n);
      // vp(divisors);
      
      ll Max = 0;
      for(ll i=0; i<(ll)divisors.size(); i++){
         if(divisors[i]==n) continue;
         ll curr_Max = max_dif_count(divisors[i]);
         Max = max(curr_Max, Max);
      }
      cout << Max << endl;
   }
   
   SpicyWings;
}