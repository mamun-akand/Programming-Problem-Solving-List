#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, cnt=1;
    cin >> n;

    int ara[n];

    for(int i=0 ; i<n ; i++){
        cin >> ara[i];
        if( i>0 && ara[i] != ara[i-1]) cnt++;
    }

    cout << cnt << endl;

    return 0;

}
