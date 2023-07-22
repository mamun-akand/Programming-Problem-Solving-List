#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, cnt;
    cin >> n;

    cnt = n/100; n %= 100;
    cnt += n/20; n %= 20;
    cnt += n/10; n %= 10;
    cnt += n/5;  n %= 5;
    cnt += n/1;

    cout << cnt << endl;

    return 0;

}
