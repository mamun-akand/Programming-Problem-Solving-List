#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    int ara[n];

    for(int i=0 ; i<n ; i++){
        cin >> ara[i];
    }

    int next = 0;


    if(ara[0] == 0){
        next = 0;
    }

    else if(ara[k-1] == 0){
        for(int i = k-2 ; i>=0 ; i--){
            if(ara[i] >= 1){
                next = i+1;
                break;
            }
        }
    }

    else{
        for(int i = n-1 ; i>=0 ; i--){
            if(ara[i] >= ara[k-1]){
                next = i+1;
                break;
            }
        }
    }

    cout << next << endl;

    return 0;

}
