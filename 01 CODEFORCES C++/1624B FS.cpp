// URL: https://codeforces.com/problemset/problem/1624/B

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
      ll a, b, c; cin>>a>>b>>c;
      
      ll m = -1;
      
      if((2*b-c)>0 && (2*b-c)%a == 0){
         m = (2*b-c)/a;
      }
      else if((a+c)%(2*b) == 0){
         m = (a+c)/(2*b);
      }
      else if((2*b)-a > 0 && (2*b-a)%c == 0){
         m = ((2*b)-a)/c;
      }
      
      if(m < 0) cout << "NO" << endl;
      else cout << "YES" << endl;
   }
   
   SpicyWings;
}