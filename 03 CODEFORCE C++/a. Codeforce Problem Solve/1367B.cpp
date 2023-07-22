#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int ara[n], rem[n];

        for(int i=0; i<n; i++){
            cin >> ara[i];
            rem[i] = ara[i]%2;
        }

        int one=0, zero=0;
        for(int i=0; i<n; i++){
            if(i%2==0 && rem[i]!=0) one++;
            if(i%2==1 && rem[i]!=1) zero++;
        }

        if(one == zero) cout << one << endl;
        else cout << "-1" << endl;

    }
    return 0;
}
