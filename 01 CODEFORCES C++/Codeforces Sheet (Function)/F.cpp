// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

bool binary(ll n){
   vector<bool> v;
   while(n != 0){
      v.pb(n%2);
      // cout << n%2 << ' ';
      n /= 2;
   }
   ll s = v.size();
   for(ll i=0; i<s/2; i++){
      if(v[i] != v[s-1-i]){
         return false;
      }
   }
   return true;
}
bool is_wonderful(ll n){
   if(n%2==0){
      return 0;
   }  
   else{
      if(binary(n)) return 1;
      else return 0;
   }
}

int main(){
   FAST;
   
   ll n; cin>>n;
   if(is_wonderful(n)) py;
   else pn;
    
   SpicyWings;
}