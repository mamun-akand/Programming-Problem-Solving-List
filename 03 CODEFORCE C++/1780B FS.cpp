// URL: https://codeforces.com/contest/1780/problem/B

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
    
   Test{
      ll n; cin>>n;
      vll v(n);
      
      ll sum=0;
      for(ll i=0; i<n; i++){
         cin>>v[i];
         sum+=v[i];
      }
      
      ll score = 0, cur_sum=0;
      
      for(ll i=0; i<n; i++){
         cur_sum += v[i];
         if(cur_sum != sum){
            score = max(score, __gcd(cur_sum, sum-cur_sum));
         }
      }
      cout << score << endl;
   }
   
   SpicyWings;
}