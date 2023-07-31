// URL: https://vjudge.net/contest/569452#problem/U

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
#define   rn      return 0;
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   // Test{}
   string s; cin>>s;
   
   auto it = s.begin();
   
   bool flag=0;
   
   for(ll i=0; i<s.size(); i++){
      if(s[i]=='0'){
         s.erase(it+i);
         flag=1;
         break;
      }
   }
   
   if(flag) cout << s << endl;
   else{
      s.erase(it);
      cout << s << endl;
   }
   
   SpicyWings;
}