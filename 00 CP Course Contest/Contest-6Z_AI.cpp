// URL: https://vjudge.net/contest/577004#problem/AI
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
const int MAX = 1e5+100;
int n, segment, q;
int l[MAX], r[MAX], query[MAX];

bool mono(ll first_change){
   int temp[n+1]={};
   for(ll i=1; i<=first_change; i++){
      temp[query[i]] = 1;
   }
   for(ll i=1; i<=n; i++){
      temp[i] += temp[i-1];
   }
   
   ll ZeroOne, One, Zero;
   for(ll i=1; i<=segment; i++){
      ZeroOne = r[i] - l[i] + 1;
      One = temp[r[i]] - temp[l[i]-1];
      Zero = ZeroOne-One;
      // cout << "One: " << One << " Zero: " << Zero << endl; 
      if(One > Zero) return true;
   }

   return false;
}

int main(){
   FAST;
   
   Test{
      cin>>n>>segment;
      for(int i=1; i<=segment; i++){
         cin >> l[i] >> r[i];
      }
      cin>>q;
      for(ll i=1; i<=q; i++){
         cin >> query[i];
      }
      
      ll L=1, R=q, ans = -1;
      while(L<=R){
         ll mid = L+(R-L)/2;
         // cout << L << ' ' << R << ' ' << mid << endl;
         if(mono(mid)){
            ans = mid;
            R = mid-1;
         }
         else{
            L = mid+1;
         }
      }
      cout << ans << endl;
   }
    
   SpicyWings;
}