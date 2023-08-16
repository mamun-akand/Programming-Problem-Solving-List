// URL: https://codeforces.com/problemset/problem/479/A

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
    
   ll a, b, c; cin>>a>>b>>c;
   
   ll cnt=0;
   
   if(a==1) cnt++;
   if(b==1) cnt++;
   if(c==1) cnt++;
   
   ll ans;
   
   if(cnt==0){
      ans = a*b*c;;
   }
   else if(cnt == 3){
      ans = a+b+c;
   }
   else if(cnt==1){
      if(a==1){
         ans = (a+b)*c;
      }
      else if(c==1){
         ans = a*(b+c);
      }
      else{
         if(a<c) ans = (a+b)*c;
         else ans = a*(b+c);
      }
   }
   else{
      if(a!=1) ans = a*(b+c);
      else if(b!=1) ans = a+b+c;
      else ans = (a+b)*c; 
   }
   
   cout << ans << endl;
   
   SpicyWings;
}