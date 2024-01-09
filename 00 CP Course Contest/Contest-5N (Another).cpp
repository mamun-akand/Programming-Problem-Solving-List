// URL: https://vjudge.net/contest/576547#problem/N

#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
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
   
   ll t; cin>>t;
   while(t--){
      ll n; string s;
      cin>>n>>s; cin.ignore();
      
      queue<ll> q;
      stack<ll> st;
      
      while(n--) {
          if(s == "FIFO"){
            string ss; cin>>ss;    
            if(ss == "IN") {
               ll x; cin>>x;      
               q.push(x);
            }
            else{
               if(q.empty()) cout << "None" << endl;
               else{
                  cout << q.front() << endl;
                  q.pop();
               }
            }
         }
         else{
            string ss; cin>>ss;   
            if(ss == "IN"){
               ll x; cin>>x;      
               st.push(x);
            }
            else{
               if(st.empty()) cout << "None" << endl;
               else{
                  cout << st.top() << endl;
                  st.pop();
               }
            }
         }
      }   
   }
   
   SpicyWings;
}