#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        int x, y;
        cin >> x >> y;

        if(x>0 && y>0 && x==y)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;

    }

    return 0;

}
