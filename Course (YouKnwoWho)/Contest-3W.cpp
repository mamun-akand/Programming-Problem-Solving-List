// URL: https://vjudge.net/contest/571543#problem/W
// https://www.eolymp.com/en/problems/911

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long
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
    
   ll a, b, c; cin>>a>>b>>c;
   
   
   ll rootPart = (b*b) - (4*a*c);
   ll posPart = (-b + sqrt(rootPart)) / (2*a); 
   ll negPart = (-b - sqrt(rootPart)) / (2*a); 
   
   if(rootPart < 0) cout << "No roots" << endl;
   else if(rootPart==0) cout << "One root: " << posPart << endl;
   else cout << "Two roots: "<< min(posPart, negPart) << " " << max(posPart, negPart) << endl;
   
   SpicyWings;
}