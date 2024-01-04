// URL: https://vjudge.net/contest/576547#problem/AB

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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=================================================================

int main(){
   FAST;
    
   Test{
      deque<int> dq;
      
      ll n; cin>>n;
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         dq.pb(x);
      }
      
      bool flag=1;
      ll masha=0, bear=0;
      
      while(!dq.empty()){
         if(flag){
            masha += dq.front();
            dq.pop_front();
            if(!dq.empty()){
               masha += dq.front();
               dq.pop_front();
            }
            flag=0;
         }
         else{
            bear += dq.back();
            dq.pop_back();
            if(!dq.empty()){
               bear += dq.back();
               dq.pop_back();
            }
            flag=1;
         }
      }
      
      // cout << masha << " " << bear << endl;
      string ans;
      if(masha > bear) ans = "Masha";
      else if(masha == bear) ans = "Draw";
      else ans = "The Bear";
      
      cout << ans << endl;
   }
   
   SpicyWings;
}