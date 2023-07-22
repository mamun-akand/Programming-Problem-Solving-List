#include<bits/stdc++.h>
using namespace std;

int main(){

    long long tst;
    cin >> tst;

    while(tst--){

        long long n, i, cnt=0;
        cin >> n;

        long long ara[n];

        for(i=0 ; i<n ; i++){
            cin >> ara[i];
        }

        if(ara[n-1] < n){
            cout << -1 << endl;
            break;
        }

        else{

            for(int i=n-1 ; i>0 ; i--){
                while(ara[i-1] >= ara[i]){
                    ara[i-1] /= 2;
                    cnt++;
                }

                if(ara[i]==0 && ara[i-1] > 0){
                    cnt = -1;
                    break;
                }

            }

        }

        cout << cnt << endl;

    }

    return 0;

}
