// URL: https://codeforces.com/contest/1907/problem/A

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
      string s; cin>>s;
      char ch = s[0], num=s[1];
      vector<char> v1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
      vector<char> v2 = {'1', '2', '3', '4', '5', '6', '7', '8'};
      
      for(ll i=0; i<8; i++){
         if(ch == v1[i]) continue;
         else cout << v1[i] << num << endl;
      }
      for(ll i=0; i<8; i++){
         if(num == v2[i]) continue;
         else cout << ch << v2[i] << endl;
      }
   }
   
   
   SpicyWings;
}