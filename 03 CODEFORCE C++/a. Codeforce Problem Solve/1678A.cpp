#include<bits/stdc++.h>
using namespace std;

int main(){

    int tst;
    cin >> tst;

    while(tst--){

        int n, cnt=0;
        cin >> n;

        int a[n];

        for(int i=0 ; i<n ; i++){
            cin >> a[i];
        }

        for(int i=0 ; ; i++) {

            sort(a, a+n);

            if(a[0] != 0){
                for(int j=0 ; j<n-1 ; j++){
                    if(a[j]==a[j+1]){
                        a[j] = 0;
                        cnt++;
                        sort(a, a+n);
                        break;
                    }
                }
            }

            if(a[0] < a[n-1]){
                a[n-1] = a[0];
                cnt++;
                sort(a, a+n);
            }

            if(a[0]==0 && a[n-1]==0)
                break;

        }

        cout << cnt << endl;

    }

    return 0;
}
