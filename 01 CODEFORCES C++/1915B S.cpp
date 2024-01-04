// https://codeforces.com/contest/1915/problem/B
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//====================================================================
//TYPES
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
      string a, b, c; cin>>a>>b>>c;
      
      sort(all(a));
      sort(all(b));
      sort(all(c));
      
      ll flag = 0;
      for(ll i=0; i<3; i++){
         if(a[i]=='?') flag=1;
         else if(b[i]=='?') flag=2;
         else if (c[i]=='?') flag=3;
      }
      
      ll ara[3] = {};
      
      for(ll i=0; i<3; i++){
         if(flag==1){
            ara[a[i]-'A']++;
         }
         else if(flag==2){
            ara[b[i]-'A']++;
         }
         else{
            ara[c[i]-'A']++;
         }
      }
      
      for(ll i=0; i<3; i++){
         if( ara[i]== 0) cout << (char)('A'+i) << endl;
      }
      
   }
   
    
   SpicyWings;
}