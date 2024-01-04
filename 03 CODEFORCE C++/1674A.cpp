#include<bits/stdc++.h>
using namespace std;

int main() {

    int tst, x, y;
    cin >> tst;

    while(tst--){

        cin >> x >> y;

        if(y%x == 0){
            cout << "1 " << y/x << endl;
        }
        else
            cout << "0 " << "0" << endl;

    }

    return 0;

}
