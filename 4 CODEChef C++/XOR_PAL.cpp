#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst; cin >> tst;

    while(tst--){

        int n; cin >> n;
        string s; cin >> s;

        int cnt=0;

        for(int i=0, j=n-1 ; i<n/2 ; i++, j--){
            if(s[i] != s[j]) cnt++;
        }

        cnt = (cnt%2==0) ? cnt/2 : (cnt/2)+1;

        cout << cnt << endl;

    }

    return 0;

}

