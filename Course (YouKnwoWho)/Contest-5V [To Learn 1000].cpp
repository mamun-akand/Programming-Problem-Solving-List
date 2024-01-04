// URL: https://vjudge.net/contest/576547#problem/V

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
   map<ll,ll> valPos;
   map<ll,vector<ll>> mp;
   
   for(ll i=0; i<n; i++){
      valPos[i] = i;
      mp[i].pb(i);
   }
   
   string what, action; ll cnt=0;
   
   while(cin>>what and what != "quit") {
      cnt++;
      
      ll a,b; 
      cin>>a; cin.ignore();
      cin>>action; cin.ignore();
      cin>>b; cin.ignore();
      
      vll v1, v2;
      //aPos & Remove
      ll posi = valPos[a];
      ll posi2 = valPos[b];
      
      if(a == b or posi == posi2) continue;
      
      auto aPos = find(mp[posi].begin(), mp[posi].end(), a);
      ll intAPos = aPos - mp[posi].begin();
      
      for(ll i=intAPos+1; i<(ll)mp[posi].size(); i++){
         v1.pb(mp[posi][i]);
      }
      mp[posi].erase(aPos, mp[posi].end());
      
      //bPos & Remove
      if(action == "onto"){
         ll posi = valPos[b];
         
         auto bPos = find(mp[posi].begin(),mp[posi].end(), b);
         ll intBPos = bPos - mp[posi].begin();
         
         for(ll i=intBPos+1; i<(ll)mp[posi].size(); i++){
            v2.pb(mp[posi][i]);
         }
         bPos++;
         mp[posi].erase(bPos, mp[posi].end());
      }
      
      if(what == "move") {       
         if(action == "onto"){
            //v1 to intial pos
            for(ll i=0; i<(ll)v1.size(); i++){
               valPos[v1[i]] = v1[i];
               mp[v1[i]].pb(v1[i]);
            }
            //v2 to intial pos
            for(ll i=0; i<(ll)v2.size(); i++){
               valPos[v2[i]] = v2[i];
               mp[v2[i]].pb(v2[i]);
            }
            valPos[a] = posi2;
            mp[posi2].pb(a);
         }
         else{
            //v1 to intial pos
            for(ll i=0; i<(ll)v1.size(); i++){
               valPos[v1[i]] = v1[i];
               mp[v1[i]].pb(v1[i]);
            }
            //v1 push to over b
            valPos[a] = posi2;
            mp[posi2].pb(a);
         }
      }
      else{
         if(action == "onto"){
            //v2 to intial pos
            for(ll i=0; i<(ll)v2.size(); i++){
               valPos[v2[i]] = v2[i];
               mp[v2[i]].pb(v2[i]);
            }
            
            mp[posi2].pb(a);
            valPos[a] = posi2;
            for(ll i=0; i<(ll)v1.size(); i++){
               ll val = v1[i];
               valPos[val] = posi2;
               mp[posi2].pb(val);
            }
         }
         else{
            mp[posi2].pb(a);
            valPos[a] = posi2;
            for(ll i=0; i<(ll)v1.size(); i++){
               ll val = v1[i];
               valPos[val] = posi2;
               mp[posi2].pb(val);
            }
         }
      }
   }
   
   for(ll i=0; i<n; i++){
      if(mp[i].empty()){
         cout << i << ":" << endl;
         continue;
      }
      else{
         cout << i << ":";
         for(auto it:mp[i]){
            cout << ' ' << it;
         }
         ln;
      }
   }
   
   SpicyWings;
}