// URL: https://codeforces.com/contest/1614/problem/B

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
      ll n; cin>>n;
      vll ans(n+1);
      
      multimap<ll, ll, greater<int>> mp;
      
      for(ll i=1; i<=n; i++){
         ll x; cin>>x;
         mp.insert({x, i});
      }
      
      ll mid = (ceil)((n+1)/2.0);
      ans[0] = mid;
      
      ll i=1, check=0, sum=0;
      for(auto it:mp){
         ll add=0;
         if(check==0){
            add = mid+i;
            check = 1;
         }
         else{
            add = mid-i;
            i++;
            check=0;
         }
         ans[it.second] = add;
         sum += 2*abs(add-mid)*it.first;
      }
      cout << sum << endl;
      vp(ans); ln; 
   }
   
   SpicyWings;
}