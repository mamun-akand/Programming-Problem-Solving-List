// URL: https://vjudge.net/contest/574988#problem/M

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
    
   ll L, R; cin>>L>>R;
   ll xorR = 0, xorL=0;
   
   while(R%4!=3 && R>=0){
      xorR ^= R;
      --R;
   }
   
   L--;   

   while(L%4!=3 && L>=0){
      xorL ^= L;
      --L;
   }
   
   cout << (xorR ^ xorL) << endl; 
   
   SpicyWings;
}