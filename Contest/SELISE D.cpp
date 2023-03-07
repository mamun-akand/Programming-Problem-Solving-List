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

int main(){
   FAST;
    
   Test{
      string s; cin>>s;
      map<char, ll> m;
      
      for(ll i=0; i<s.size(); i++){
         m[s[i]]++;
      }
      
      // cout << m.size() <<endl;
      
      string s1 = "EILS";
      int cnt1=0;
      
      for(int i=0; i<4; i++){
         auto it = m.find(s1[i]);
         if(it == m.end()) continue;

         if(i==0 && (*it).second>=2) cnt1++;
         if(i==1 && (*it).second>=1) cnt1++;
         if(i==2 && (*it).second>=1) cnt1++;
         if(i==3 && (*it).second>=2) cnt1++;
      }
      
      // cout << cnt1 << " "; ln;
      
      string s2 = "DPafgilmorst";
      int cnt2=0;
      
      for(int i=0; i<12; i++){
         auto itt = m.find(s2[i]);
         if(itt == m.end()) continue;
         
         if(i==0 && (*itt).second>=1) cnt2++;
         if(i==1 && (*itt).second>=1) cnt2++;
         if(i==2 && (*itt).second>=2) cnt2++; 
         if(i==3 && (*itt).second>=1) cnt2++;
         if(i==4 && (*itt).second>=1) cnt2++;
         if(i==5 && (*itt).second>=2) cnt2++; 
         if(i==6 && (*itt).second>=2) cnt2++;
         if(i==7 && (*itt).second>=1) cnt2++;
         if(i==8 && (*itt).second>=1) cnt2++;
         if(i==9 && (*itt).second>=1) cnt2++; 
         if(i==10 && (*itt).second>=1) cnt2++; 
         if(i==11 && (*itt).second>=2) cnt2++; 
      }
      
      // cout << cnt2 << endl;
    
      string ans;
      
      if(cnt1==4 && cnt2==12) ans = "BOTH";
      else if(cnt1<4 && cnt2<12) ans = "NONE";
      else if(cnt1==4 && cnt2<12) ans = "SELISE";      
      
      cs; cout << ans << endl;
      
   }
   
   SpicyWings;
}