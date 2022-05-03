#include<bits/stdc++.h>
using namespace std;

int main(){

    string wrd;
    cin >> wrd;

    int len = wrd.size();
    int cnt=0;

    int i, j;

    for(i=0 ; i<len ; i++){

        if(wrd[i]=='*') continue;

        for(j=i+1 ; j<len ; j++){

            if(wrd[i] == wrd[j]){
                wrd[j] = '*';
                cnt++;
            }

        }
    }

    int dis = len - cnt;

    if(dis%2==1) cout << "IGNORE HIM!" << endl;

    else cout << "CHAT WITH HER!" << endl;

    return 0;

}
