// https://codeforces.com/problemset/problem/363/B
#include<bits/stdc++.h>
using namespace std;
#define   ll    long long
#define   vll   vector <ll>	

int main(){
   ll n, total; cin>>n>>total;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   
   ll sum=0, Min=LLONG_MAX, ans=0;
   for(ll R=1; R<=n; R++){
      sum += v[R];
      if(R>=total){
         if(sum < Min){
            ans = R-total+1;
            Min = sum;
         }
         sum -= v[R-total+1];
      }
   }
   cout << ans << endl;
}