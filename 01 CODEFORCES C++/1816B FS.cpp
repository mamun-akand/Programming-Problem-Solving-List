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
      ll ara[2][n];
      
      ara[0][0] = n*2;
      ara[1][n-1] = n*2-1;
      
      
      ll i;
      for(i=1; i<n; i+=2){
         ara[0][i] = i+1;
      }
      
      ll temp = ara[0][n-1];
      
      for(ll j=2; j<n; j+=2){
         temp += 2;
         ara[0][j] = temp;
      }
      
      
      for(ll j=0; j<n; j+=2){
         ara[1][j] = j+1;
      }
      
      temp = ara[0][n-1]-1;
      
      for(ll j=1; j<n; j+=2){
         temp += 2;
         ara[1][j] = temp;
      }
      
      for(ll i=0; i<2; i++){
         for(ll j=0; j<n; j++){
            cout << ara[i][j] << " ";
         }
         cout << endl;
      }
      
   }
   
   SpicyWings;
}