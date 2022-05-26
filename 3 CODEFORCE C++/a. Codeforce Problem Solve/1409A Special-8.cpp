#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int a, b;
        cin >> a >> b;

        int x = abs(a-b);

        if(x%10==0) cout << x/10 << endl;
        else cout << (x/10) + 1 << endl;

    }

    return 0;

}
