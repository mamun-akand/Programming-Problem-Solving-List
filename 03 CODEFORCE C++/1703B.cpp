#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        sort(s.begin(), s.end());

        int cnt=1, bal = 0;

        for(int i=0; i<n; i++){
            if(s[i]==s[i+1]) cnt++;
            if(s[i]!=s[i+1]) {
                bal += (cnt+1); cnt=1;
            }
        }
        cout << bal << endl;
    }

    return 0;
}
