// https://codeforces.com/problemset/problem/363/B
#include<bits/stdc++.h>
using namespace std;
#define   ll    long long
#define   vll   vector <ll>	

int main(){
   ll n, k; cin>>n>>k;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   ll sum=0;
   for(ll i=1; i<=k; i++){
      sum += v[i]; 
   }
   ll Min = sum, ansIndex=1;
   for(ll R=k+1; R<=n; R++){
      sum += v[R];
      sum -= v[R-k];
      if(sum<Min){
         Min = sum;
         ansIndex = R-k+1;
      }
   }
   cout << ansIndex << endl;
}