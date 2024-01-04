#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v;

    for(int i=0; i<n; i++){
        int a; cin >> a;
        v.push_back(a);
    }

    int Min = *min_element(v.begin(), v.end());
    int Max = *max_element(v.begin(), v.end());

    cout << (Max-Min+1) - n << endl;

    return 0;
}
