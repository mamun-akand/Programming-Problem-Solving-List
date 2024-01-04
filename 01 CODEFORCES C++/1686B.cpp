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

        int cnt=0;

        for(int i=0 ; i<n-1 ; i++){
            if(ara[i]>ara[i+1]){
                cnt++; i++;
            }
        }

        cout << cnt << endl;

    }

    return 0;

}
