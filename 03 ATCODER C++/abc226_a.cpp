#include<bits/stdc++.h>
using namespace std;

int main(){
    float x;
    cin >> x;

    float dec = x - int(x);

    if(dec < 0.5) cout << int(x) << endl;
    else cout << int(x)+1 << endl;

    return 0;

}
