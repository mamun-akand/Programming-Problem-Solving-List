#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int ara[n];

        for(int i=0 ; i<n ; i++){
            cin >> ara[i] ;
        }

        sort(ara, ara+n);

        int cnt=0;

        for(int i=0 ; i<n-1 ; i++){
            if(ara[i]==ara[i+1]){
                ara[i] = 0; cnt++;
            }
        }

        if(cnt%2==0) cout << n-cnt << endl;
        else cout << n-(cnt+1) << endl;

    }

    return 0;
}

