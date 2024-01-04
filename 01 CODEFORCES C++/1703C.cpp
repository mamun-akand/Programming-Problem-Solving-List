#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){

        int n; cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int j=0; j<n; j++){
            int m; cin >> m;
            string s; cin >> s;

            for(int i=0; i<m; i++){
                if(s[i]=='D' && a[j]==9) a[j]=0;
                else if(s[i]=='D') a[j]++;

                if(s[i]=='U' && a[j]==0) a[j]=9;
                else if(s[i]=='U') a[j]--;
            }
        }

        for(int i=0; i<n; i++){
            cout << a[i];
            if(i<n-1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}


