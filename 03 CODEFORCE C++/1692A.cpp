#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int x, y, cnt=0; cin >> x;

        for (int i=1 ; i<4 ; i++){
            cin >> y;
            if(y>x) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
