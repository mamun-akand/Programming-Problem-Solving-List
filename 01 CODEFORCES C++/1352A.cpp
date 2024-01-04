#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin >> t;

    while(t--){

        string s;
        cin >> s;

        int cnt=0, place=1;

        for(int i=0 ; i<s.size() ; i++){
            if(s[i] != '0') cnt++;
        }

        cout << cnt << endl;

        for(int i=s.size()-1 ; i>=0 ; i--){
            if(s[i]!='0'){
                cout << (s[i] - '0') * place << " ";
            }
            place *= 10;
        }

        cout << '\n';

    }

    return 0;

}
