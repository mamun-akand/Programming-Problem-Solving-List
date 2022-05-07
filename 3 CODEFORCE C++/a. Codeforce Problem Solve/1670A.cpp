#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        long long n, neg=0;
        cin >> n;

        long long a[n];

        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            if(a[i] < 0){
                neg++;
                a[i] *= -1 ;
            }
        }

        for(int i=0 ; i<neg ; i++) a[i] *= -1 ;

        bool x = true;

        for(int i=0 ; i<n-1 ; i++){
            if(a[i] > a[i+1]){
                x = false;
                break;
            }
        }

        if(x) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;

}
