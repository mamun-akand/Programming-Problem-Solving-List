// URL: https://codeforces.com/contest/1788/problem/B

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
      
      if(n%10==9) {
         string a = "", b = "";
         ll ok1=0, ok2=0;
         
         while(n) {
            ll tmp = n%10;
            n = n/10;
            // cout << tmp << " " << n << endl;
            if(tmp%2==0){
               a.pb(tmp/2 + '0');
               b.pb(tmp/2 + '0');
            }
            else{
               if(ok1==1){
                  a.pb(tmp/2 + '0');
                  ok1=0;
                  b.pb((tmp/2)+1 + '0');
                  ok2=1;
               }
               else if(ok2==1){
                  b.pb(tmp/2 + '0');
                  ok2=0;
                  a.pb((tmp/2)+1 + '0');
                  ok1=1;
               }
               else{
                  a.pb(tmp/2 + '0');
                  ok1=0;
                  b.pb((tmp/2)+1 + '0');
                  ok2=1;
               }
            }
         }
         
         reverse(all(a));
         reverse(all(b));
         
         cout << stoll(a) << " " << stoll(b) << endl;
      }
      
      else if(n%2==0) cout << n/2 << " " << n/2 << endl;
      
      else{
         cout << n/2 << " " << (n/2)+1 << endl;
      }
      
   }
   
   SpicyWings;
}