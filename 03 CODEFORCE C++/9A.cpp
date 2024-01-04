// Problem: A. Die Roll
// Contest: Codeforces - Codeforces Beta Round #9 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/9/A
// Memory Limit: 64 MB
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
    
      int a, b; cin>>a>>b;
      
      int Max = max(a, b);
      
      int m = (6-Max)+1;
      
      if(6%m==0){
         a=1;
         b=6/m;
      }
      else if(m%2==0){
         a=m/2;
         b=6/2;
      }
      else{
         a=m;
         b=6;
      }
      
      cout << a <<"/"<< b << endl;

   SpicyWings;
}

















