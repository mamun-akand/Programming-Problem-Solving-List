#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;
    int val = 0;

    while(tst--){

        string state;
        cin >> state;

        if(state == "X++" || state == "++X") val++;

        else if(state == "X--" || state == "--X") val--;

    }

    cout << val << endl;

    return 0;

}
