// https://codeforces.com/problemset/problem/932/B
#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll   long long
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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================
vector<ll> v[10];

ll digit_multi(ll num){
   ll multi=1;
   while(num > 0){
      ll digit = num%10;
      if(digit != 0) multi *= digit;
      num /= 10;
   }
   return multi;
}

ll fun(ll n){
   if(n<=9) return n;
   ll new_n = digit_multi(n);
   return fun(new_n);
}

int main(){
   FAST;
    
   for(ll i=1; i<=1e6; i++){
      ll d = fun(i);
      v[d].pb(i);   
   }

   Test{
      ll l,r,k; cin>>l>>r>>k;
      ll range_ans = upper_bound(all(v[k]), r) - lower_bound(all(v[k]), l);
      cout << range_ans << endl;
   }
   
   
   SpicyWings;
}