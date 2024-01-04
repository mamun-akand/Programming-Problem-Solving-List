#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, flag = 1, v;
    cin >> n;

    int a[n];
    for(int i=0 ; i<=n ; i++) a[i]=0;

    int p = 2;

    while(p--){

        int t; cin >> t;

        for(int i=1 ; i<=t ; i++){
            cin >> v;
            a[v] = 1;
        }

    }

    for(int i=1 ; i<=n ; i++)
        if(a[i]==0) flag = 0;

    if(flag==1) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;

}
