#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int j=1 ; j<=n ; j++){

        if(j%2 != 0) cout << "I hate " ;
        else cout << "I love ";

        if(j==n){
            cout << "it" ;
        }
        else cout << "that ";

        }

    return 0;

}
