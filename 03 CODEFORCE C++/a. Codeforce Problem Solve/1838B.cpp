// URL: https://codeforces.com/contest/1838/problem/B

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
    
   Test{
      ll n; cin>>n;
      vll v(n+1);
      
      ll one, two, N;
      for(ll i=1; i<=n; i++){
         ll x; cin>>x;
         v[i] = x;
         
         if(x==1) one = i;
         if(x==2) two = i;
         if(x==n) N = i;
      }
            
      if(N < two && N>one){
         cout << one << " " << two << endl;
      }
      else if(N < one && N>two){
         cout << one << " " << two << endl;
      }
      else if(N > two && N > one && two > one){
         cout << two << " " << N << endl;
      }
      else if(one > two && N > one){
         cout << one << " " << N << endl;         
      }
      else if(two > one && one > N){
         cout << one << " " << N << endl;
      }
      else if(one > two && two > N){
         cout << two << " " << N << endl;
      }
      
   }
   
   SpicyWings;
}