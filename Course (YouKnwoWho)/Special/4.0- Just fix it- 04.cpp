//Special Problem(4.0- Just fix it): Given an array of nn integers, find the number of subarrays such that their xor is equal to 00. Solve it in O(n2)O(n2) time complexity.

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
   
   ll n; cin>>n;
   vll v(n+1), preXor(n+1);
   
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }
   
   for(ll i=1; i<=n; i++){
      preXor[i] = preXor[i-1] ^ v[i];
   }
   
   // vp(preSum); ln;
   
   ll cnt=0;
   
   for(ll i=1; i<=n; i++){
      for(ll j=i; j<=n; j++){
         // ll Xor = (preXor[j] ^ preXor[i-1]);
         // if(Xor == 0) cnt++;
         if(preXor[j] == preXor[i-1]) cnt++;
      }
   }
   
   cout << cnt << endl;
   
   SpicyWings;
}