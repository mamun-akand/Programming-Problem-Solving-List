// URL: https://www.spoj.com/problems/MAIN71/

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll   long long int
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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================

int main(){
   FAST;
    
   Test{
      string order; cin>>order;
      string a, b; cin>>a>>b;
      
      int ara[27];
      for(ll i=0; i<26; i++){
         ara[order[i]-'a'+1] = i+1; 
      }
      
      char ans = '=';
      for(ll i=0; i<a.size(); i++){
         if(ara[a[i]-'a'+1] < ara[b[i]-'a'+1]){
            ans = '<';
            break;
         }
         else if(ara[a[i]-'a'+1] > ara[b[i]-'a'+1]){
            ans = '>';
            break;
         }    
      }
      cout << ans << endl;
   }
   
   SpicyWings;
}