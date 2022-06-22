#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tt = min({k*l/nl, c*d, p/np});

    cout << tt/n << endl;
    return 0;
}
