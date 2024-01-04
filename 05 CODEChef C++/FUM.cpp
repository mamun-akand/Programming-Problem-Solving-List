// https://www.codechef.com/problems/FUM

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll      long long int
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

ll facto[1005];
const ll MOD = 1e9+7;
const ll N = 1000;

void factorial(){
   facto[0] = 1;
   ll ans = 1;
   for(ll i=1; i<=N; i++){
      ans = ((ans%MOD)*i)%MOD;
      facto[i] = ans;
   } 
}

int main(){
   FAST;
   
   factorial();
   
   
   Test{
      ll n; cin>>n;
      cout << facto[n] << endl;
   }
   
   SpicyWings;
}