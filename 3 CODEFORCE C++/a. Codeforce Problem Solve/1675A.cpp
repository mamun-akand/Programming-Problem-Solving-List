#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        long long a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        long long dr = x - a;
        long long cr = y - b;

        if(dr > 0) c = c - dr;
        if(cr > 0) c = c - cr;

        if(c >= 0) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;

}
