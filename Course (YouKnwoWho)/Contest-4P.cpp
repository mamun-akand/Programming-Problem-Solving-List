// URL: https://vjudge.net/contest/574988#problem/P

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll      long long int
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
      ll n, k; cin>>n>>k;
      vll v(k); for(auto &it:v) cin>>it;
   
      if(n==1 || k==1) {cout << "Yes" << endl; continue;}

      vll dif;
      
      for(ll i=k-1; i>0; i--){
         dif.pb(v[i]-v[i-1]);
      }
      
      bool flag=1;
      
      for(ll i=0; i<dif.size()-1; i++){
         if(dif[i] < dif[i+1]){
            cout << "No" << endl;
            flag=0; break;
         }
      }
      
      if(flag==1){
         ll last = dif.back();
         
         ll rem_size = n-dif.size();
         
         ll rem_val = v[0];
         
         rem_size--;
         
         while(rem_size--){
            rem_val -= last; 
         }
         
         if(rem_val <= last) cout << "Yes" << endl;
         else cout << "No" << endl;
      }
      
   }
   
   SpicyWings;
}