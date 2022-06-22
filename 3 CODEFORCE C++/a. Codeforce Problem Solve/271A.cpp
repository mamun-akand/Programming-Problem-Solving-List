#include<bits/stdc++.h>
using namespace std;

int main(){

    int y, d1, d2, d3, d4;
    cin >> y;

    while(true){

        y++;

        d1 = (y%10);
        d2 = (y/10)%10;
        d3 = (y/100)%10;
        d4 = (y/1000)%10;

        if(d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4){
            cout << y << endl;
            break;
        }

    }

    return 0;

}
