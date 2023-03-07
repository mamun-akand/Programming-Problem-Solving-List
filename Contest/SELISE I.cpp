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
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

bool cmp(pair<string,ll>a, pair<string,ll>b){
   
      return a.second < b.second;
}

int main(){
   ll t; cin>>t;
   
   map <string, ll> m;

   for(int i=0; i<t; i++){
      string s; ll n;
      cin>>s>>n;
      m[s] = n;
   }
      
   vector<pair<string,ll>> v(m.begin(), m.end());
      
   sort(v.begin(), v.end(),cmp);
   int cnt = 0;
   
   cout << "Selise Coding Challenge 2023 Winners" << endl;
   
   for(auto it:v){
      cnt++;
      if(cnt==1) cout << "Winner: " << it.first << " => " << it.second << endl;
      if(cnt==2) cout << "1st Runner Up: " << it.first << " => " << it.second << endl;
      if(cnt==3) cout << "2nd Runner Up: " << it.first << " => " << it.second << endl;
      
      if(cnt==3) break;
   } 
   
      
}