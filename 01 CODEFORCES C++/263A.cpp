#include<bits/stdc++.h>
using namespace std;

int main(){

    int num[5][5], row, col;

    for(int i=0 ; i<5 ; i++){
        for(int j=0 ; j<5 ; j++){
            cin >> num[i][j];
            if(num[i][j] == 1){
                row = i+1;
                col = j+1;
            }
        }
    }

    int m1, m2;

    if(row <= 3) m1 = 3 - row ;
    else if(row > 3) m1 = row - 3 ;

    if(col <= 3) m2 = 3 - col ;
    else if(col > 3) m2 = col - 3 ;

    cout << m1 + m2 << endl ;

    return 0;

}
