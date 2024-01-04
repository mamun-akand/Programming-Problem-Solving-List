#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, cnt = 1;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0 ; i<n ; i++){
        if(s[i] < 'a') s[i] += 32;
    }

    sort(s.begin(), s.end());

    for(int i=0 ; i<n-1 ; i++){

        if(n < 26) break;

        if(s[i]==s[i+1]) continue;

        if(s[i] != s[i+1]){
            cnt++;
        }

    }

    if(cnt==26) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;

}
