#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        int L1, r1, L2, r2, ans;
        cin >> L1 >> r1 >> L2 >> r2;

        if(L2 >= L1){
            if(L2 <= r1) ans = L2;
            else if(L2>r1) ans = L1+L2;
        }
        else if(L1 >= L2){
            if(L1 <= r2) ans = L1;
            else if(L1>r2) ans = L1+L2;
        }

        cout << ans << endl;

    }

    return 0;
}
