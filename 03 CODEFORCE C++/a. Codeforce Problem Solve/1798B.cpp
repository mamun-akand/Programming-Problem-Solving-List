// URL: https://codeforces.com/contest/1798/problem/B

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
      ll day; cin>>day;
      unordered_map <ll, ll> mp;
      vector<vector<ll>> v;
      
      for(ll i=0; i<day; i++){
         ll n; cin>>n;
         vll temp(n);
         for(ll i=0; i<n; i++){
            cin>>temp[i];
            mp[temp[i]]++;
         }
         v.push_back(temp); 
      }
      
      vll ans;
      int flag;
      
      for(ll i=0; i<day; i++){
         flag=0;
         for(ll j=0; j<v[i].size(); j++){
            if(mp[ v[i][j] ] == 1 && flag==0){
               ans.pb(v[i][j]);  
               flag=1;
            }
            mp[v[i][j]]--;
         }
      }
      
      if(ans.size() < day) cout << -1 << endl;
      else{
         for(auto it:ans){
            cout << it << " ";
         }
         ln;
      }
      
   }
   
   SpicyWings;
}