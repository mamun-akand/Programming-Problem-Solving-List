#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi      3.1415926535897932384626433832795
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

#define   Test    ll tc; cin>>tc; f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<string> &v){for(auto it:v){cout << it <<endl;}}
//=================================================================

int main(){
   FAST;
    
   // Test{}
   ll n,m,k; cin>>n>>m>>k;
   vll v(m+1), typ(m,0);
   
   for(ll i=0; i<m+1; i++){
      cin>>v[i];
   }
   
   vector<string> bit_str;
   ll max_bit = 0;
   
   for(ll i=0; i<m+1; i++){
      string bit="";
      ll deci = v[i];
      
      while(deci > 0){
         bit += (deci%2) + '0';
         deci = deci/2;
      } 
      reverse(bit.begin(), bit.end());
      // cout << bit << " " << bit.size() << endl;
      bit_str.pb(bit);
   }
   
   for(ll i=0; i<bit_str.size(); i++){
      ll sz = bit_str[i].size();
      if(sz>max_bit) max_bit = sz;   
   }
   
   // cout << max_bit << endl;
   
   for(ll i=0; i<bit_str.size(); i++){
      ll x = max_bit-bit_str[i].size();
      // cout << x << endl;
      for(ll j=1; j <= x ; j++){
         bit_str[i] = '0' + bit_str[i]; 
      }
   }
   
   // vp(bit_str);
   
   for(ll i=0; i<bit_str.size()-1; i++){
      for(ll j=0; j<max_bit; j++){
         if(bit_str[m][j] != bit_str[i][j]) typ[i]++;
      }
   }
   
   // cout << bit_str[2][0] << endl;
   ll ans=0;
   
   for(ll i=0; i<typ.size(); i++){
      if (typ[i] <= k) ans++;
   }
   
   cout << ans;
   
   SpicyWings;
}