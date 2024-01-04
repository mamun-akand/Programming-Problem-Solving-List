// URL: https://codeforces.com/contest/1562/problem/B

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

vll isPrime(100, 1);

int main(){
   FAST;
   
   isPrime[0] = isPrime[1] = 0;
   
   for(ll i=2; i*i<=100; i++){
      if(isPrime[i] == 1){
         for(ll j=i*i; j<=100; j+=i){
            isPrime[j] = 0;
         }
      }
   }
      
      
   Test{
      ll n; cin>>n;
      string s; cin>>s;
      
      bool flag=0;
      for(ll i=0; i<s.size(); i++){
         if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
            cout << 1 << endl;
            cout << s[i] << endl;
            flag=1;
            break;
         }
      }
      if(flag) continue;
      
      for(ll i=0; i<s.size(); i++){
         for(ll j=i+1; j<s.size(); j++){
            ll temp = (s[i]-'0')*10 + (s[j]-'0');
            if(isPrime[temp] == 0){
               cout << 2 << endl;
               cout << temp << endl;
               flag=1; break;
            }
         }
         if(flag) break;
      }
   }
   
   SpicyWings;
}