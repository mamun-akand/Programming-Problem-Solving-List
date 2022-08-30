#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int mish=0, chris=0;

    while(t--){
        int m, n; cin>>m>>n;
        if(m>n) mish++;
        if(n>m) chris++;
    }

    if(mish==chris) cout << "Friendship is magic!^^" << endl;
    else if(mish>chris) cout << "Mishka" << endl;
    else cout << "Chris" << endl;

    return 0;
}
