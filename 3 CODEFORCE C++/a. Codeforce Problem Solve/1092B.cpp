#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector <int> v;

    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int sum=0;

    for(int i=1; i<v.size(); i+=2){
        sum += (v[i]-v[i-1]);
    }

    cout << sum << endl;

    return 0;
}
