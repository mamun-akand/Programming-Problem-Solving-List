// URL: https://mirror.codeforces.com/contest/1902/problem/B

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

ll days, min_points, lesson_point, task_point;
bool mono(ll rest){
   ll day = days-rest;
   ll earn=0;
   ll task_need = min(ceil(days/7.0), (2.0*day));
   
   earn += task_need*task_point;
   earn += day*lesson_point;
   return earn >= min_points;
}

int main(){
   FAST;
   
   Test{
      cin>>days>>min_points>>lesson_point>>task_point;
      
      ll l=0, r=days, ans=0;
      while(l<=r){
         ll mid = l+(r-l)/2;
         
         if(mono(mid)){
            ans = mid;
            l = mid+1;
         }
         else{
            r = mid-1;
         }
      }
      cout << ans << endl;
   }
    
   SpicyWings;
}