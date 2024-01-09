#include<bits/stdc++.h>
using namespace std;

const int Max = 100;
int frequency[Max];

int main(){
   int n; cin>>n;
   int ara[n]; for(int i=0; i<n; i++) cin>>ara[i];
   
   for(int i=0; i<n; i++){
      frequency[ara[i]]++;
   }
   for(int i=0; i<Max; i++){
      for(int j=0; j<frequency[i]; j++){
         cout << i << " ";
      }
   }
   return 0;
}
