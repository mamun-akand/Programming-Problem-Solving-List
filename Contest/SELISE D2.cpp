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

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;
void vp(vector<ll> &v){for(auto it:v){cout << it <<" ";}}
//=================================================================

int main(){
   FAST;
   
   Test{
      
      string s;
      getline(cin, s);
      
      int n1=0, n2=0;
      string sub1="";
      string sub2="";
      
      for(ll i=0; i<=s.size()-6; i++){
         if(s[i]=='S'){
            sub1 = s.substr(i, 6);
            if(sub1=="SELISE") n1=1;
         }
         if(s[i]=='S' && s.size()-i >= 22){
            sub2 = s.substr(i, 22);
            if(sub2=="SELISEDigitalPlatforms"){
               n2=1; n1=1; break;
            }
         }
         if(s[i]=='S' && s.size()-i >= 24){
            sub2 = s.substr(i, 24);
            if(sub2=="SELISE Digital Platforms"){
               n2=1; n1=1; break;
            }
         }
      }
      
      string ans;
      
      if(n2==1) ans = "BOTH";
      else if(n1==1) ans = "SELISE";   
      else ans = "NONE";
   
      cs; cout << ans << endl;
   }
   
   SpicyWings;
}