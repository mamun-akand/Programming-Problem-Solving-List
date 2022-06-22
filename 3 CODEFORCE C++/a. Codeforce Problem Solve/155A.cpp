#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    int amz=0, s, m;

    for(int i=0 ; i<n ; i++){

        int c; cin >> c;

        if(i==0) s=c, m=c;

        else if(c>m) amz++, m=c;

        else if(c<s) amz++, s=c;

    }

    cout << amz << '\n';

    return 0;

}
