#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, r;
    cin >> k >> r;

    for(int i=1 ; ; i++){
        int t = k*i;
        if(t%10==0 || t%10==r){
            cout << i << endl;
            break;
        }
    }

    return 0;
}
