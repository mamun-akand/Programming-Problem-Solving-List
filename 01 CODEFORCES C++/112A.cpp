#include<bits/stdc++.h>
using namespace std;

int main(){

    string wrd1;
    string wrd2;

    cin >> wrd1
        >> wrd2;

    int len = wrd1.size();

    for(int i=0 ; i<len ; i++){

        int ascii1 = wrd1[i];
        int ascii2 = wrd2[i];

        if(ascii1 <= 90)
            wrd1[i] = ascii1 + 32;

        if(ascii2 <= 90)
            wrd2[i] = ascii2 + 32;

    }

    int cmp = wrd1.compare(wrd2);

    cout << cmp << endl;

    return 0;
}
