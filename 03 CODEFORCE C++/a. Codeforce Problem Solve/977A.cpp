#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, k;
    cin >> n >> k;

    for(int i=k ; i > 0 ; i--){

        if(n%10==0){

            n /= 10;
            continue;

        }

        else n--;


    }

    cout << n << endl;

    return 0;

}
