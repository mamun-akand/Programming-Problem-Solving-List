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
      ll a, b, c, k;
      cin>>a>>b>>c>>k;
      bool flag=0;
      
      
      if(((a+b+c)%3) == 0){
         ll sum = (a+b+c)/3;
         
         a = a-sum;
         b = b-sum;
         c = c-sum;
         
         if(a%k==0 && b%k==0 && c%k==0)
            flag = 1;
         
           
      }
      
      if(flag) {
         cs; cout << "Peaceful" << endl;
      }
      else{
         cs; cout << "Fight" << endl;
      }
   }
   
   SpicyWings;
}

















