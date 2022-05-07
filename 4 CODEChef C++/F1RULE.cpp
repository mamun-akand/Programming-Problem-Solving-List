#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        int x, y;
        cin >> x >> y;

        double per = x * (107/100.00);
        double fin = (double) y;

        if(per >= fin)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;

}

