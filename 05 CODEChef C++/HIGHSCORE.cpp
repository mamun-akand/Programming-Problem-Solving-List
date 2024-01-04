#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        int n, l=4, maxi=0; cin >> n;

        while(l--){
            int x; cin >> x;
            if(x>maxi) maxi = x;
        }

        cout << maxi << '\n';

    }

    return 0;

}
