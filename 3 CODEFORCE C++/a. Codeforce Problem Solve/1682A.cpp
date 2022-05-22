#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n; cin >> n;
        string s; cin >> s;

        int mid = (n%2==0) ? (n/2)-1 : n/2;
        int cnt=1;

        for(int i=mid-1; i>=0 ; i--){
            if(s[i]==s[mid]) cnt++;
            if(s[i]!=s[mid]) break;
        }

        for(int j=mid+1 ; j<n ; j++){
            if(s[j]==s[mid]) cnt++;
            if(s[j]!=s[mid]) break;
        }

        cout << cnt << endl;

    }

    return 0;

}
