// URL: https://codeforces.com/contest/1847/problem/B

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
      vll v(n); for(auto &it:v) cin>>it;
      
      ll AND = v[0];
      
      for(ll i=1; i<n; i++){
         AND = (AND & v[i]);
      }

      if(AND != 0) {cout << 1 << endl; continue;}
      
      ll tmp = -1, cnt=0;
      
      for(ll R=0; R<n; R++){
         if(tmp == -1) tmp = v[R];
         else{
            tmp = (tmp & v[R]);
         }
         
         if(tmp == AND){
            cnt++;
            tmp = -1;  
         }
      }
      cout << cnt << endl;
       
   }
   
   SpicyWings;
}