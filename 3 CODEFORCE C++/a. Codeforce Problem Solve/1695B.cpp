// URL: https://codeforces.com/contest/1695/problem/B

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
      ll Mike_min = LLONG_MAX, ind1;
      ll Joe_min = LLONG_MAX, ind2;
      
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         if(i%2==0){
            if(Mike_min > x){
               Mike_min = x;
               ind1 = i;
            }
         }
         else{
            if(Joe_min > x){
               Joe_min = x;
               ind2 = i;
            }
         }
      }
      
      if(n%2==1) cout << "Mike" << endl;
      else{
         if(Mike_min > Joe_min) cout << "Mike" << endl;
         else if(Joe_min > Mike_min) cout << "Joe" << endl;
         else{
            if(ind1 < ind2) cout << "Joe" << endl;
            else cout << "Mike" << endl;
         }
      }
   }
   
   SpicyWings;
}