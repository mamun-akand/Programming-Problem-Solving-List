#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e=0, o=0; cin>>n;
    int v[n];

    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]%2==0) e++;
        else o++;
    }

    if(e>0 && o>0){
        sort(v, v+n);
    }

    for(int i=0; i<n-1; i++){
        cout << v[i] << " ";
    }
    cout << v[n-1] << endl;

    return 0;
}
