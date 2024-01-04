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
    
   ll a, b; cin>>a>>b;
   ll xorA = 0, xorB=0;
   
   if(a != 0) --a;
   
   if(a%4==0) xorA = a;
   else if(a%4==1) xorA = 1;
   else if(a%4==2) xorA = a+1;
   else if(a%4==3) xorA = 0;
   
   if(b%4==0) xorB = b;
   else if(b%4==1) xorB = 1;
   else if(b%4==2) xorB = b+1;
   else if(b%4==3) xorB = 0;
   
   cout << (xorA ^ xorB) << endl;
   
   SpicyWings;
}