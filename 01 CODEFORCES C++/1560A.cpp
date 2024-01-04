#include"bits/stdc++.h"
using namespace std;

int main(){
    vector <int> v(1001);
    int i=1, n = 1;

    while(i<=1001){
        if(n%3!=0 && (n-3)%10!=0){
            v[i++] = n;
        }
        n++;
    }

    int t; cin >> t;

    while(t--){
        int q; cin >> q;
        cout << v[q] << endl;
    }

    return 0;
}
