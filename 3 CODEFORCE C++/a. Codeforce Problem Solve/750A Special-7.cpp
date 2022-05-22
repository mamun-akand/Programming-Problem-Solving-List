#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k, p=0; cin >> n >> k;

    int left = 240-k;

    for(int i=1 ; i<=n ; i++){

        if(left<5) break;
        else{
            p++;
            left -= i*5;
        }

    }

    cout << p << endl;

    return 0;

}
