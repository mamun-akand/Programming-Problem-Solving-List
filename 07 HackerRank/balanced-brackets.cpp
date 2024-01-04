// URL: https://vjudge.net/contest/576547#problem/L

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
   
   ll n; cin>>n;
   while(n--){
      string s; cin>>s;
      stack<char> st;
      bool flag = 1;
      
      for(ll i=0; i<(ll)s.size(); i++){
         if(s[i]=='(' or s[i]=='{' or s[i] == '['){
            st.push(s[i]);
         }
         else{
            if(st.empty()){
               flag=0; break;
            }
            
            if(s[i]==')' and st.top()=='('){
               st.pop();
            }
            else if(s[i]=='}' and st.top()=='{'){
               st.pop();
            }
            else if(s[i]==']' and st.top()=='['){
               st.pop();
            }
            else{
               flag=0; break;
            }
         }
      }
      
      if(flag == 0 or st.size() > 0) pn;
      else py;
   }
   
   SpicyWings;
}