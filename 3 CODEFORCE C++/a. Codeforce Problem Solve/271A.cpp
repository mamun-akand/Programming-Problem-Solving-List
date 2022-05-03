#include<bits/stdc++.h>
using namespace std;

int main(){

    int y;
    cin >> y;

    int yr, d1, d2, d3, d4;

    for(int i=y+1 ; ; i++){

        yr = i;

        d1 = yr % 10;
        yr = yr / 10;

        d2 = yr % 10;
        yr = yr / 10;

        d3 = yr % 10;
        yr = yr / 10;

        d4 = yr % 10;

        if( d1 != d2 && d2 != d3 && d3 != d4 ){

            cout << i << endl;
            break;

        }

    }

    return 0;

}
