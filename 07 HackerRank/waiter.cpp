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
#define   vp(v)   for(auto it:v){cout << it <<endl;};
//=====================================================================
 
const int n = 1e4;
vector <bool> isPrime(n, 1);
vector <int> prime;

int main(){
    FAST;

    isPrime[0] = isPrime[1] = 0;
    for(int j=2*2; j*j<n; j+=2){
        isPrime[j] = false;
    }

    for(int i=2; i<=n; i++){
        if(isPrime[i]==true){
            for(int j=2*i; j<n; j+=i){
                isPrime[j] = false;
            }
        }
    }
     
    prime.push_back(0);
    for(int i=2; i<=(ll)isPrime.size(); i++){
       if(isPrime[i] == 1) prime.push_back(i);
    }
    
    ll n, q; cin>>n>>q;
    vll v; for(ll i=0; i<n; i++) {ll x; cin>>x; v.pb(x);}
    vll ans;
    
    ll start=1; 
    
    while(start <= q){
       vll B, A;
       while(!v.empty()){
          ll temp = v.back();
          v.pop_back();
          
          if(temp % prime[start] == 0) B.pb(temp);
          else A.pb(temp);
       }
       while(!B.empty()){
          ll temp = B.back();
          B.pop_back();
          ans.pb(temp);
       }
       
       if(start == q){
          for(ll i=A.size()-1; i>=0; i--){
             ans.pb(A[i]);
          }
       }
       v = A;
       
       start++;
    }
    
    vp(ans);
}