// URL: https://codeforces.com/contest/1797/problem/B

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
      ll n, k; cin>>n>>k;
      bool ara[n][n];
      
      for(ll i=0; i<n; i++){
         for(ll j=0; j<n; j++){
            cin >> ara[i][j];
         }
      }
      
      if(n == 1) {cout << "YES" << endl; continue;}
      
      if(n%2==0){
         vll row, col;
         
         ll val = 0, cnt=0;
         for(ll i=0; i < 2*(n/2)*(n/2); i++){
            row.pb(val);
            cnt++;
            if(cnt == n){
               val++;
               cnt=0;
            } 
         }
         
         val = 0, cnt=0;
         for(ll i=0; i < 2*(n/2)*(n/2); i++){
            col.pb(val);
            cnt++;
            if(cnt == n){
               val=-1;
               cnt=0;
            } 
            val++;
         }
         
         // vp(row); ln;
         // vp(col); ln;
         
         ll NOT=0;
         for(ll i=0; i<row.size(); i++){
            ll opo_row = n-1-row[i];
            ll opo_col = n-1-col[i];
            
            if(ara[row[i]][col[i]] != ara[opo_row][opo_col]) NOT++;
         }
                  
         if(k<NOT) cout << "NO" << endl;
         else if((k-NOT)%2 == 1) cout << "NO" << endl;
         else cout << "YES" << endl;
      }
      else{
         vll v3, v4;
         
         ll val = n/2;
         for(ll i=0; i<val; i++){
            v3.pb(val);
         }
         
         for(ll i=0; i<val; i++){
            v4.pb(i);
         }
         
         // vp(v3); ln;
         // vp(v4);
         
         ll NOT=0;
         for(ll i=0; i<v3.size(); i++){
            ll opo_r1 = n-1-v3[i];
            ll opo_c1 = n-1-v4[i];
            
            if(ara[v3[i]][v4[i]] != ara[opo_r1][opo_c1]) NOT++;
            
            swap(v3[i], v4[i]);
            
            ll opo_r2 = n-1-v3[i];
            ll opo_c2 = n-1-v4[i];
            
            if(ara[v3[i]][v4[i]] != ara[opo_r2][opo_c2]) NOT++;
         }
         
         // ln; cout << NOT << endl;
         /////////
         
         vll row2, col2;
         
         ll val2 = 0, cnt2=0;
         for(ll i=0; i < 2*(n/2)*(n/2); i++){
            row2.pb(val2);
            cnt2++;
            if(cnt2 == n-1){
               val2++;
               cnt2=0;
            } 
         }
         
         val2 = 0, cnt2=0;
         for(ll i=0; i < 2*(n/2)*(n/2); i++){
            col2.pb(val2);
            cnt2++;
            
            if(cnt2 == n-1){
               val2=-1;
               cnt2=0;
            } 
            
            val2++;
            if(val2 == n/2) val2++;
         }
         
         // ln; vp(row2); ln;
         // vp(col2); ln;         

         for(ll i=0; i<row2.size(); i++){
            ll opo_row2 = n-1-row2[i];
            ll opo_col2 = n-1-col2[i];
            
            if(ara[row2[i]][col2[i]] != ara[opo_row2][opo_col2]) NOT++;
         }
         
         // cout << NOT << endl;
         if(k<NOT) cout << "NO" << endl;
         // else if((k-NOT)%2 == 1) cout << "NO" << endl;
         else cout << "YES" << endl;
            
      }
      
   }
   
   SpicyWings;
}