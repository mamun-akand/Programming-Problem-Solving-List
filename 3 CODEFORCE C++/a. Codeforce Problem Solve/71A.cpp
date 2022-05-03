#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        string wrd;
        cin >> wrd;

        int lnth = wrd.size();

        if(lnth <= 10){

            cout << wrd << endl;

        }

        else{

            cout << wrd[0] << lnth-2 << wrd[lnth-1] << endl;

        }

    }

    return 0;

}
