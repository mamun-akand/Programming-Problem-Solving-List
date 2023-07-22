// Problem: B. Gifts Fixing
// Contest: Codeforces - Codeforces Round #661 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1399/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;

//===================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double
#define   vi	vector <int>		
#define   vll	vector <ll>	
#define   vld	vector <ld>
#define   mp	map <ll,ll>
#define   st	set <ll>
//FUNCTIONS
#define   FAST   ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   pi   3.1415926535897932384626433832795
#define   all(v)   v.begin(),v.end()
#define   setp(n)   fixed << setprecision(n)
#define   endl   "\n"
#define   SpicyWings   return 0;
#define   ln   cout<<"\n";
#define   pb   push_back
#define   eb   emplace_back
#define   rn   return 0;

#define   pa   cout<<ans<<endl
#define   py   cout<<"YES"<<endl
#define   pn   cout<<"NO"<<endl

#define   Test   ll tc; cin>>tc; f1(t,1,tc)
#define   cs   cout << "Case " << t << ": ";

#define   f0(i,s,e)   for(ll i=s; i< e; i++)
#define   f1(i,s,e)   for(ll i=s; i<=e; i++)
#define   fr(i,e,s)   for(ll i=e-1; i>=s; i--)
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//===================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      vll v1, v2;
      
      for(ll i=0; i<n; i++){
         ll num; cin>>num;
         v1.pb(num);
      }
      
      for(ll i=0; i<n; i++){
         ll numm; cin>>numm;
         v2.pb(numm);
      }
      
      ll Min1 = *min_element(all(v1));
      ll Min2 = *min_element(all(v2));
      
      ll move=0;
      
      for(ll i=0; i<n; i++){
         ll s1 = abs(v1[i]-Min1);
         ll s2 = abs(v2[i]-Min2);
         
         move += abs(s1-s2) + min(s1, s2);
      }
      
      cout << move << endl;
      
   }

  
   SpicyWings;
}

















