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

#define   Test    ll tc; cin>>tc; f1(t,1,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,s,e)   for(ll i=s; i< e; i++)
#define   f1(i,s,e)   for(ll i=s; i<=e; i++)
#define   fr(i,e,s)   for(ll i=e-1; i>=s; i--)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
    
Test{
      
   string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
   
   string ss; cin>>ss;
   ll flag = 1;
   
   if(ss[0] == 'Y'){
      for(ll i=0; i<ss.size(); i++){
         if(s[i]!=ss[i]) {flag=0;};
      }
   }
   else if(ss[0]=='e'){
      ll j = 1;
      for(ll i=0 ; i<ss.size(); i++){
         if(s[j]!=ss[i]) {flag=0;}
         j++;
      } 
   }
   else{
      ll j = 2;
      for(ll i=0; i<ss.size(); i++){
         if(s[j]!=ss[i]) {flag=0;}
         j++;
      } 
   }
   if(flag) py;
   else pn;
}
   
   SpicyWings;
}

















