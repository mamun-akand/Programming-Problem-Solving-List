// URL: https://cses.fi/problemset/task/1650

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

const int N = 2e5+9;
int ara[N];
int preXor[N];

int main(){
   FAST;
   
   ll n, q; cin>>n>>q;
   
   for(ll i=1; i<=n; i++){
      cin >> ara[i];
   } 
   
   for(ll i=1; i<=n; i++){
      preXor[i] = preXor[i-1] ^ ara[i];
   }
   
   while(q--){
      ll L, R; cin>>L>>R;
      cout << (preXor[L-1] ^ preXor[R]) << endl;
   }
   
   
   SpicyWings;
}