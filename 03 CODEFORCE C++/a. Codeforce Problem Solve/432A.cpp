#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n], cnt=0;

    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        if(a[i]+k <= 5) cnt++;
    }

    cout << cnt/3 << endl;

    return 0;
}
