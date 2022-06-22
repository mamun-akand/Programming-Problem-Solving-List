#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int x, y, ch; cin >> x >> y;

        if(x==y || x<y) ch = 0;
        else ch = x-y;

        cout << ch << endl;
    }

    return 0;
}
