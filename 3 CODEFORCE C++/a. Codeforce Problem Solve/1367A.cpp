#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    while(n--){
        string s; cin >> s;

        for(int i=0 ; i<s.size() ; i+=2)
            cout << s[i];

        cout << s[s.size()-1] << endl;
    }

    return 0;
}
