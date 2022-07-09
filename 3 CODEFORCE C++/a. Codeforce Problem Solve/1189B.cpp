#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n; cin>>n;
    long long v[n];

    for(long long i=0; i<n; i++) cin >> v[i];

    sort(v, v+n);

    if(n<3 || v[n-1] >= v[n-2]+v[n-3]){
        cout << "NO" << endl; return 0;
    }
    else{
        cout << "YES" << endl;
        cout << v[n-3] << " "
             << v[n-1] << " "
             << v[n-2];

        for(long long i=n-4; i >=0 ; i--) cout << " " << v[i];
    }

    return 0;
}
