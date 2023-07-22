#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string x, y; cin >> x >> y;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int cnt = 0, flag=0;

        for(int i=0 ; i<n ; i++){
            if(x[i]==y[i]) continue;
            if(y[i]!=y[i+1] && i<n-1){
                flag=1;
                if(flag==0) cnt++;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
