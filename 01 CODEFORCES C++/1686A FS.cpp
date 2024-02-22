#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int n; cin >> n;
        int ara[n], sum=0;

        for(int i=0 ; i<n ; i++){
            cin >> ara[i];
            sum += ara[i];
        }

        int flag = 0;

        for(int i=0 ; i<n ; i++){
            double x = (double)sum-ara[i];
            double avg = x/(n-1);

            if(avg == ara[i]) {flag = 1; break;}
        }

        if(flag ==1) cout << "YES" << endl;

        else cout << "NO" << endl;

    }

    return 0;

}
