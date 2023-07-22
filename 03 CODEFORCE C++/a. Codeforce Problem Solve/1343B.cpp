#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;

        if( (n/2)%2 != 0 ) cout << "NO" << endl;
        else{
            cout << "YES" << endl;

            int cnt = n/2;

            for(int i=2 ; cnt ; i+=2){
                cout << i << " " ; cnt--;
            }

            cnt = (n/2);

            for(int i=1 ; cnt-1 ; i+=2){
                cout << i << " " ; cnt--;
            }

            cout << (pow((n/2),2)+(n/2)) - pow(((n/2)-1),2) << endl;
        }

    }

    return 0;
}
