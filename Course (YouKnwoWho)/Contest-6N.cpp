// URL: https://codeforces.com/problemset/problem/940/C

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

int main(){
   FAST;
    
   ll size, req; cin>>size>>req;
   string s; cin>>s;
   set<char> st;
   
   for(ll i=0; i<size; i++){
      st.insert(s[i]);
   }
   
   char smallest = *st.begin();
   string ans = "";
   
   if(req > size){
      while(s.size() < req){
         s += smallest;
      }
      cout << s << endl;
      return 0;
   }
   
   for(ll i = req-1; i>=0; i--){
      auto upper = upper_bound(all(st), s[i]);
      if(upper != st.end()){
         ans = s.substr(0, i);
         ans += *upper;
         break;
      }
   }
   while(ans.size() < req){
      ans += smallest;
   }
   cout << ans << endl;
   
   SpicyWings;
}