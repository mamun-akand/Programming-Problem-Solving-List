#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        long long n, x, y, vh, d1, d2;
        cin >> n >> x >> y;

        vh = (n-1)*2 ;

        if(x+y > n)
            d1 = (((n*2)+1) - (x+y)) - 1 ;
        else
            d1 = ((x+y)-1) - 1;

        d2 = (n - abs(x-y))-1;

        cout << vh+d1+d2 << endl;
    }

    return 0;

}

