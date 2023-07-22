#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        long long x, y, q;
        cin >> x >> y;

        q = x%y;

        if(q==0) cout << q << endl;
        else cout << y-q << endl;
    }

    return 0;

}

