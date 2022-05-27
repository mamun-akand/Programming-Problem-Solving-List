#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b;
    cin >> n;

    if(n%2==0 && (n/2)%2 == 0) a = b = n/2 ;

    else if(n%2==0 && (n/2)%2 == 1){
        a=(n/2)-1;
        b= (n/2)+1;
    }

    if(n%2==1){

        a = 4;
        b = n-4;

        while(1){
            if(b%3==0) break;
            b -= 2; a+=2;
        }

    }

    cout << a << " " << b;

    return 0;

}
