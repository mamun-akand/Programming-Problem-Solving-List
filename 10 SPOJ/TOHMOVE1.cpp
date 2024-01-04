// URL: https://www.spoj.com/problems/TOHMOVE1
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, steps, moves;

void tower_of_hanoi(ll disks, char start, char end, char mid){
   if(disks==0) return;
   tower_of_hanoi(disks-1, start, mid, end);
   moves++;
   if(moves==steps){
      cout << disks << " : " << start << " => " << end << endl;
   }
   tower_of_hanoi(disks-1, mid, end, start);
}

int main(){
   ll t; cin>>t;
   while(t--){
      moves=0;
      cin>>n>>steps;
      tower_of_hanoi(n, 'A', 'C', 'B');
   }
}
   