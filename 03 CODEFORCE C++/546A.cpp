#include<bits/stdc++.h>
using namespace std;

int main(){

    long long k, n, w, amount;
    cin >> k >> n >> w;

    amount = k * ( (w*(w+1)) / 2 );

    if(amount <= n) cout << "0" << endl;
    else cout << amount - n << endl;

    return 0;

}
