// URL: https://codeforces.com/contest/1909/problem/0

#include<bits/stdc++.h>
using namespace std;

//====================================================================
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
//=====================================================================
 
int main(){
   FAST;
   
   Test{
      ll n; cin>>n;
      ll pp=0, mp=0, mm=0, pm=0, xr=0, xl=0, yd=0, yu=0;
      while(n--){
         ll x, y; cin>>x>>y;
         if(x>0 and y>0) pp++;
         else if(x>0 and y<0) pm++;
         else if(x<0 and y<0) mm++;
         else if(x<0 and y>0) mp++;
         
         if(x>0 and y==0) xr++;
         else if(x==0 and y<0) yd++;
         else if(x<0 and y==0) xl++;
         else if(x==0 and y>0) yu++;
      }
      if((mm==0 and pm==0 and yd == 0) or (mp==0 and mm==0 and xl == 0)) py;
      else if((mm==0 and pm==0 and yd == 0) or (pp==0 and pm==0 and xr == 0)) py;
      else if((pp==0 and mp==0 and yu == 0) or (pp==0 and pm==0 and xr == 0)) py;
      else if((pp==0 and mp==0 and yu == 0) or (mp==0 and mm==0 and xl == 0)) py;
      else pn;
   }
   
   SpicyWings;
}