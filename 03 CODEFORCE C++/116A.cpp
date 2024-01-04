#include<bits/stdc++.h>
using namespace std;

int main(){

    int stp, out, in;
    cin >> stp;

    int rem = 0, mxm = 0;

    while(stp--){

        cin >> out >> in;

        if(stp == 0) break;
        else rem = rem + (in-out);

        if(rem > mxm) mxm = rem;

    }

    cout << mxm << endl;

    return 0;

}
