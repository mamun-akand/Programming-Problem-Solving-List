#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int n; cin >> n;
        int ara[n];

        for(int i=0 ; i<n ; i++){
            cin >> ara[i];
        }

        for(int i=n-1 ; i>=0 ; i--){
            if(ara[i] != 0){cout << i << '\n'; break;}
        }

    }

    return 0;

}

