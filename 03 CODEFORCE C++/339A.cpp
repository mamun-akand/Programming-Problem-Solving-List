#include<bits/stdc++.h>
using namespace std;

int main(){

    string wrd;
    cin >> wrd;

    sort(wrd.begin(), wrd.end());

    int len = wrd.size();
    int oprtr = len/2;

    for(int i = oprtr ; i < len ; i++){
        cout << wrd[i];
        if(i != len-1) cout << "+";
    }

    return 0;

}
