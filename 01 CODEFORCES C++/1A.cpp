#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n, m, a;
    cin >> n >> m >> a;

    long double l = (long double) n / a ;

    long double w = (long double) m / a;
    long long flgstn = ceil(l) * ceil(w);

    cout << flgstn;

    return 0;

}
