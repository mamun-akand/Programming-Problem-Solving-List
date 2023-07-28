https://www.codechef.com/problems/BIT

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

vll v(1010, 0);

int setBitCount(int n){
   int cnt=0;
   for(int i=0; i<=10; i++){
      if(n & (1<<i)) cnt++;
   }
   return cnt;
}

int main(){
   FAST;
   
   for(ll i=1; i<=1000; i++){
      int bit = setBitCount(i);
      v[i] = v[i-1] + bit;
   }
    
   Test{
      int n; cin>>n;
      cout << v[n] << endl;
   }
   
   SpicyWings;
}