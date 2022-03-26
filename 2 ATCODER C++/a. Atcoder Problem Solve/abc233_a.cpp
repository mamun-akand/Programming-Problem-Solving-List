#include<bits/stdc++.h>
using namespace std;


int main(){

    int a, b;
    cin >> a >> b;

    double q = ((double)b-(double)a)/10;

    if(a>b || a==b) cout << 0 ;
    else cout << ceil(q);

    return 0;

}

