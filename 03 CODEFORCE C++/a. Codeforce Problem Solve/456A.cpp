#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector< pair<int, int> > v;

    for(int i=0; i<n; i++){
        int a, b; cin>>a>>b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());

    int mark=0;

    for(int i=0; i<v.size()-1; i++){
        if(v[i].second > v[i+1].second){
            mark=1; break;
        }
    }

    if(mark==1) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;

    return 0;
}
