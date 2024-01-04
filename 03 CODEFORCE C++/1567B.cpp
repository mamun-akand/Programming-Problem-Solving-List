// URL: https://codeforces.com/contest/1567/problem/B

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
      ll a, b; cin>>a>>b;
      
      ll rem = (a-1)%4;
      ll x0r;
      
      if(rem == 0) x0r = a-1;
      else if(rem == 1) x0r = 1;
      else if(rem == 2) x0r = a;
      else if(rem == 3) x0r = 0;
      
      
      if(x0r == b) cout << a << endl;
      else{
         if((x0r^b) != a) cout << a+1 << endl;
         else cout << a+2 << endl;
      }
   }
   
   SpicyWings;
}