#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t, n, k; cin >> t;

    while(t--){
        cin >> n >> k;
        int a[n], b[n];

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<int>());

        int sum=0, cnt=1;

        for(int i=0; i<n; i++){
            if(cnt<=k && a[i]<b[i]){
                a[i] = b[i]; cnt++;
            }
        }

        for(int i=0; i<n; i++) sum += a[i];

        cout << sum << endl;
    }

    return 0;
}
