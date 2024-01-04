#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    int stp=0;

    for(int i = 5 ; x > 0 ; i--){
        stp += x/i ;
        x = x%i;
    }

    cout << stp <<endl ;

    return 0;

}
