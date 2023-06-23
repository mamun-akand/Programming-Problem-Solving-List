//URL: https://codeforces.com/problemset/problem/1537/B

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

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

int main(){
   FAST;
    
   Test{
      
      ll n, m, i, j; cin>>n>>m>>i>>j;
      int x[5] = {0, 1, 1, n, n};
      int y[5] = {0, 1, m, m, 1};
      
      int Max = 0, ans;
      
      for(int taai=1; taai<=4; taai++){
         int temp = abs(i-x[taai]) + abs(i-y[taai]);
         if(temp>Max){
            ans = taai;
            Max = temp;
         }
      }
      if(ans==1 || ans==3){
         cout << x[1] << " " << y[1] << " " << x[3] << " " << y[3] << endl;
      }
      else{
         cout << x[2] << " " << y[2] << " " << x[4] << " " << y[4] << endl;
      }
      
   }
   
   SpicyWings;
}