// URL: https://codeforces.com/problemset/problem/1823/A

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
      ll n, k; cin>>n>>k;
      
      ll pos = n, neg=0;
      bool flag=1;
      
      while(pos >= neg){
         ll res = ((pos*(pos-1))/2) + ((neg*(neg-1))/2);
         if(res==k){
            flag=0;
            cout << "YES" << endl;
            for(ll i=1; i<=pos; i++){
               cout << 1 << " ";
            }
            for(ll i=1; i<=neg; i++){
               cout << -1 << " ";
            }
            ln;
            break;
         }
         pos--;
         neg++;
      }
      
      if(flag) cout << "NO" << endl;
   }
   
   SpicyWings;
}