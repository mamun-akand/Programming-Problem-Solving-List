// https://vjudge.net/contest/579458#problem/F

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

int main(){
   FAST;
   
   Test{
      ll n; cin>>n;
      map<ll,ll> mp;
      for(ll i=2; i*i<=n; i++){
         while(n%i==0){
            mp[i]++;
            n /= i;
         }
      }
      if(n>1) mp[n]++;

      set<ll> st;
      ll prod=1;
      for(auto [x,y]:mp){
         st.insert(x);
         for(ll i=1; i<y; i++){
            prod = prod*x;
            if(st.find(prod) == st.end()){
               st.insert(prod);
               prod=1;
            }
         }
      }
      if(prod>1) st.insert(prod);
      
      for(auto x:st){
         cout << x << " ";
      }
      ln;
   }
   
    
   SpicyWings;
}