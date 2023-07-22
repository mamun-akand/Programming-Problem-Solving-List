#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        long long n;
        cin >> n;

        if(n<4 || n%2==1)
            cout << -1 << endl;
        else if(n==4 || n==6)
            cout << 1 << " " << 1 << endl;
        else{
            cout << fixed << (long long)(ceil(n/6.0)) << " " << n/4 << endl;
        }

    }

    return 0;

}
