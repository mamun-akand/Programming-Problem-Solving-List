// URL: https://codeforces.com/contest/1195/problem/B

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
    
   ll m, k; cin>>m>>k;
   
   ll L=1, H=m;
   
   while(L<=H){
      
      ll mid = L + (H-L)/2;
      
      ll total = (mid*(mid+1))/2;
      total = total - k;
      
      ll t = total + mid;
      
      if(t == m){
         cout << total << endl;
         break;
      }
      else if(t > m){
         H = mid-1;
      }
      else{
         L = mid+1;
      }
      
   }
   
   SpicyWings;
}