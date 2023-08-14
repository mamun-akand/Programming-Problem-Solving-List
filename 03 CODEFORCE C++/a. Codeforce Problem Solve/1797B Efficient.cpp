// URL: https://codeforces.com/contest/1797/problem/B

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
      ll n, k; cin>>n>>k;
      bool ara[n][n];
      
      for(ll i=0; i<n; i++){
         for(ll j=0; j<n; j++){
            cin >> ara[i][j];
         }
      }
      
      if(n == 1) {cout << "YES" << endl; continue;}
      
      ll NOT=0;
      for(ll i=0; i<n; i++){
         for(ll j=0; j<n; j++){
            ll x = abs(n-1-i);
            ll y = abs(n-1-j); 
            if(ara[i][j] != ara[x][y]) NOT++;
         }
      }
      
      NOT /= 2;
      
      if(n%2==0){
         if(k<NOT) cout << "NO" << endl;
         else if((k-NOT)%2 == 1) cout << "NO" << endl;
         else cout << "YES" << endl;
      }
      else{
         if(k<NOT) cout << "NO" << endl;
         else cout << "YES" << endl;
      }
   }
   
   SpicyWings;
}