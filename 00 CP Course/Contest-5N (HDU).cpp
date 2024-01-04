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
      queue<string> q;
      stack<string> st;
      while(n--){
         if(s == "FIFO"){
            string ss;
            getline(cin, ss);        
            if(find(all(ss), ' ') != ss.end()){
               stringstream custom(ss);
               string s1, s2;
               custom>>s1>>s2;      
               q.push(s2);
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
            string ss;
            getline(cin, ss);
            if(find(all(ss), ' ') != ss.end()){
               stringstream custom(ss);
               string s1, s2;
               custom>>s1>>s2;      
               st.push(s2);
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