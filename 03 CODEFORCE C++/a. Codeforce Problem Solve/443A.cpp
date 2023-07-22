#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    int cnt = 1;

    for(int i=(s.size()-3) ; ; i--){

        if(s.size()==2) {cnt = 0; break;}

        else if(s.size()==3) break;

        else{
            if(s[i-1] == ',') break;
            if(s[i] != s[i-1]) cnt++;
        }
    }

    cout << cnt << endl;

    return 0;

}
