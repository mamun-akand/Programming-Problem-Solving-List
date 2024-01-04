// URL: https://vjudge.net/contest/576547#problem/AA

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
   vector<string> v;
   
   while(n--) {
      string command; cin>>command;
      if(command=="pwd"){
         cout << '/';
         for(auto it:v){
            cout << it << '/';
         }
         ln;
      }
      else{
         string path; cin>>path;
         ll start=0;
         if(path[0]=='/'){
            v.clear();
            start++;
         }
         ll size = path.size();
         string dir="";
         for(ll i=start; i<size ;i++){
            if(path[i]=='/' or i==size-1){
               if(i == size-1) dir.pb(path[i]);
               if(dir == ".."){
                  v.pop_back();
                  dir = "";
               }  
               else{
                  v.pb(dir);
                  dir = "";
               }
            }
            else{
               dir.pb(path[i]);
            }
         }    
      }
   }
   
   SpicyWings;
}