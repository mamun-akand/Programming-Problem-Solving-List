// URL: https://vjudge.net/contest/576547#problem/Q

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
   
   ll n, scenario=0;
   while(cin>>n && n!=0){
      scenario++;
      unordered_map<ll, ll> mp;
      for(ll i=1; i<=n; i++){
         ll num; cin>>num;
         for(ll j=1; j<=num; j++){
            ll x; cin>>x;
            mp[x] = i; 
         }
      }
      unordered_map<ll, queue<ll>> team_members; 
      queue<ll> team_queue; 
      
      string s;
      cout << "Scenario #" << scenario << endl;
      
      while(cin>>s and s != "STOP"){
         if(s == "ENQUEUE"){
            ll val; cin>>val;
            ll team_no = mp[val];
            
            if(team_members[team_no].empty()){
               team_members[team_no].push(val);
               team_queue.push(team_no);
            }
            else{
               team_members[team_no].push(val);
            }
         }
         else{
            ll front_team = team_queue.front();
            cout << team_members[front_team].front() << endl;
            team_members[front_team].pop();
            
            if(team_members[front_team].empty()){
               team_members.erase(front_team);
               team_queue.pop();
            }
         }
      }
      ln;
   }
   
   SpicyWings;
}