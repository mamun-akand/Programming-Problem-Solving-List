#include<bits/stdc++.h>
using namespace std;

int main(){

    long long ara[4], cnt=0;;

    for(int i=0 ; i<4 ; i++){
        cin >> ara[i];
    }

    for(int i=0 ; i<4 ; i++){

        if(ara[i] == 0) continue;

        for(int j=0 ; j<4 ; j++){
            if(i == j || ara[j] == 0)
                continue;
            if(ara[i] == ara[j]){
                ara[j] = 0;
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;

}
