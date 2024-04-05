// URL: https://codeforces.com/contest/1950/problem/C

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
//#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

int main(){
   FAST;
   
   Test{
   		ll h=0, m=0;
   		for(ll i=1; i<=5; i++){
   			char ch; cin>>ch;
   			// cout << ch << endl;
   			if(i==1){
   				h += (ch - '0')*10;
   			}else if(i==2){
   				h += (ch - '0');
   			}else if(i==4){
   				m += (ch - '0')*10;
   			}else if(i==5){
   				m += (ch - '0');
   			}
   		}
   		// cout << h << " " << m << endl;
   		
   		if(h == 0){
   			cout << 12 << ":"; 
   			if(m<=9) cout << 0;
   			cout << m << " AM" << endl;
   		}else if(h >= 1 && h<=11){
   			
   			if(h<=9) cout << 0;
   			cout << h << ":";
   			if(m<=9) cout << 0;
   			cout << m << " AM" << endl;
   			
   		}else if(h==12){
   			// cout << "*";
   			if(h<=9) cout << 0;
   			cout << h << ":";
   			if(m<=9) cout << 0;
   			cout << m << " PM" << endl;
   			
   		}else if(h > 12){
   			if(h-12<=9) cout << 0;
   			cout << h-12 << ":";
   			if(m<=9) cout << 0;
   			cout << m << " PM" << endl;
   		}
   }
   
   SpicyWings;
}





















