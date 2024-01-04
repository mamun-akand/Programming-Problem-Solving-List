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
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
   
   string line;
   map<string, string> dic;
   
   while(getline(cin, line)){
      if(line.empty()) continue;
      
      if(find(line.begin(), line.end(), ' ') != line.end()){
         stringstream custom(line);
         string x,y;
         custom>>x>>y;
         dic[y] = x;
      }
      else{
         if(dic.find(line) == dic.end()) cout << "eh" << endl;
         else cout << dic[line] << endl;
      }
   }
   
   SpicyWings;
}