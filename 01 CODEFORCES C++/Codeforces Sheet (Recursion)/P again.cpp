// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

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
//=========================+============================================

ll rec_log(ll n){
   if(n==1){
      return 0;
   }
   ll cnt=1;
   return cnt += rec_log(n/2);
}

int main(){
   FAST;
   
   ll n; cin>>n;
   cout << rec_log(n) << endl;
    
   SpicyWings;
}