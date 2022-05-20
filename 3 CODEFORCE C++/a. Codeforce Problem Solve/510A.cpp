#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m, cnt=1;
    cin >> n >> m;

    char s1[m], s2[m];

    for(int i=0 ; i<m ; i++){
        s1[i] = '#';
        if(i < m-1) s2[i] = '.';
        else s2[i] = '#';
    }

    for(int i=1 ; i<=n ; i++){

        if(i%2==1) cout << s1 << endl;

        else if(i%2==0 && cnt%2==1){
            cout << s2 << endl;
            cnt++;
        }

        else{
            cout << strrev(s2) << endl;
            cnt++;
        }
    }

    return 0;

}
