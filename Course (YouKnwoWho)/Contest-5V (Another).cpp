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

const ll N = 26; 
ll n;
vector<ll> v[N];

pair<ll, ll> posOfValue(ll val){
   for(ll i=0; i<n; i++){
      for(ll j=0; j<v[i].size(); j++){
         if(v[i][j] == val) return {i, j};
      }
   }
}

void moveToInitialVector(ll vec, ll valPos){
   for(ll i=valPos+1; i<(ll)v[vec].size(); i++){
      ll x = v[vec][i];
      v[x].pb(x);
   }
   v[vec].resize(valPos+1);
}

void moveOnTopOfVector(ll aVec, ll aPos, ll bVec){
   for(ll i=aPos; i<v[aVec].size(); i++){
      ll x = v[aVec][i];
      v[bVec].pb(x);
   }
   v[aVec].resize(aPos);
}

int main(){
   FAST;
    
   cin>>n;
   for(ll i=0; i<n; i++){
      v[i].pb(i);
   }
   
   string what, action;
   while(cin>>what and what != "quit") {
      ll a,b; 
      cin>>a>>action>>b;
      
      auto [aVecPos, aValPos] = posOfValue(a);
      auto [bVecPos, bValPos] = posOfValue(b);
      if(aVecPos == bVecPos) continue;
      
      if(what == "move") {       
         if(action == "onto"){
            moveToInitialVector(aVecPos, aValPos);
            moveToInitialVector(bVecPos, bValPos);
            moveOnTopOfVector(aVecPos, aValPos, bVecPos);
         }
         else{
            moveToInitialVector(aVecPos, aValPos);
            moveOnTopOfVector(aVecPos, aValPos, bVecPos);
         }
      }
      else{
         if(action == "onto"){
            moveToInitialVector(bVecPos, bValPos);
            moveOnTopOfVector(aVecPos, aValPos, bVecPos);
         }
         else{
            moveOnTopOfVector(aVecPos, aValPos, bVecPos);
         }
      }
   }
   
   for(ll i=0; i<n; i++){
      cout << i << ":";
      for(ll j=0; j<v[i].size();j++){
         cout <<' '<<v[i][j];
      }
      ln;
   }
   
   SpicyWings;
}