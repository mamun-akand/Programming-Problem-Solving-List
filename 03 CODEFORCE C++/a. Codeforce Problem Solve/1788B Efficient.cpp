// URL: https://codeforces.com/contest/1788/problem/B

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
      string s; cin>>s;
      
      string a="", b="";
      bool check=0;
      
      for(auto ch:s){
         ll d = ch- '0';
         a.pb(d/2 + '0');
         b.pb(d/2 + '0');
         
         if(d&1) {
            if(check==0) a.back() += 1, check=1;
            else b.back() += 1, check=0;
         }
      }
      
      cout << stoll(a) << " " << stoll(b) << endl;
   }
      
   
   SpicyWings;
}