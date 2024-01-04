#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    if(n%2!=0) cout << v[n/2] << endl;
    else cout << v[(n/2)-1] << endl;

    return 0;
}
