#include<bits/stdc++.h>
using namespace std;

int main(){

    string wrd;
    cin >> wrd;

    int len = wrd.size();
    int cnt=0;

    int i;

    sort(wrd.begin(), wrd.end());

    for(i=1 ; i<len ; i++){

        if(wrd[i] == wrd[i-1]) cnt++;

    }

    if((len-cnt)%2 == 1) cout << "IGNORE HIM!" << endl;
    else cout << "CHAT WITH HER!" << endl;

    return 0;

}
