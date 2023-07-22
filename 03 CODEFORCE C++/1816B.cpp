// URL: https://codeforces.com/contest/1816/problem/B

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
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      ll grid[2][n];
      
      ll odd0=2;
      for(ll i=1; i<n; i+=2){
         grid[0][i] = odd0;
         odd0+=2;
      }
      
      ll even0=2*n;
      for(ll i=0; i<n; i+=2){
         grid[0][i] = even0;
         even0-=2;
      }
      
      ll even1=1;
      for(ll i=0; i<n; i+=2){
         grid[1][i] = even1;
         even1+=2;
      }
      
      odd0-=1;
      for(ll i=1; i<n; i+=2){
         grid[1][i] = odd0;
         odd0+=2;
      }
      
      for(ll i=0; i<2; i++){
         for(ll j=0; j<n; j++){
            cout << grid[i][j] << " ";
         }
         ln;
      }
   }
   
   SpicyWings;
}