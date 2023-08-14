// URL: https://codeforces.com/contest/1820/problem/B

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
    
   Test{
      string s; cin>>s;
      
      ll cnt=0;
      
      ll L=0, R, flag = 0;
      
      for(R=0; R < s.size(); R++){
         if(s[R] == '1'){
            flag=1;
            L = R;
         }
         
         while(s[R]=='1' && flag==1){
            R++;
         }
         
         if(flag==1 and s[R] == '0' or R == s.size()){
            cnt = max(cnt, R-L);
            flag = 0;
         }
      }
      
      auto it = find(all(s), '0');
      
      if(it != s.end()){
         ll cnt1=0, cnt2=0;
         for(ll i=0; ;i++){
            if(s[i]=='1') cnt1++;
            else break;
         }
         for(ll i=s.size()-1; ;i--){
            if(s[i]=='1') cnt2++;
            else break;
         }
         cnt = max(cnt, cnt1+cnt2);
      }
      
      // cout << "one is " << cnt << endl;
      
      if(cnt == 0) cout << cnt << endl;
      else if(cnt == s.size()) cout << cnt * cnt << endl;
      else {
         ll ans = cnt/2;
         if(cnt%2==0){
            ans = ans*(ans+1);
            cout << ans << endl;
         }
         else{
            ans = (ans+1)*(ans+1); 
            cout << ans << endl;
         }
      }
   }
   
   SpicyWings;
}