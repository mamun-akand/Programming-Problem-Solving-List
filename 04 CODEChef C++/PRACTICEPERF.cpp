#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, cnt=0;

    for(int i=0 ; i<4 ; i++){
        cin >> n;
        if(n>=10) cnt++;
    }

    cout << cnt << endl;

    return 0;

}
