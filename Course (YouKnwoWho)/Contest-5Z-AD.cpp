// URL: https://vjudge.net/contest/576547#problem/AD

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
      ll n, k; cin>>n>>k;
      string s; cin>>s;
      
      queue<ll> q;
      ll q_size = (k*2)+1;
      ll curr_total=0, Max=0, pos;
      
      for(ll i=0; i<n; i++){
         if(q.size() == q_size){
            curr_total -= q.front();
            q.pop();
         }
         
         char ch = s[i];
         ll point;
         if(islower(ch)){
            point = ch - 'a' + 1;
         }
         else{
            point = ch - 'A' + 27;
         }
         q.push(point);
         curr_total += point;
         
         if(curr_total > Max){
            pos = i+1;
            Max = max(Max, curr_total);
         }
      }   
      
      if(pos > q_size) pos = pos - k;
      cout << pos << ' ' << Max << endl;
   }
   
   SpicyWings;
}