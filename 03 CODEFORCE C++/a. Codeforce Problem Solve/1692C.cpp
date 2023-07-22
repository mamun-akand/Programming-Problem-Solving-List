#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s[8];

        for(int i=0; i<8; i++){
            cin >> s[i];
        }

        int flag=0;

        for(int i=0; i<8; i++){
            for(int j=0; j<6; j++){
                if(s[i][j]=='#' && s[i][j+1]=='.' && s[i][j+2]=='#'){
                    cout << i+2 << " " << (j+1)+1 << endl;
                    flag=1; break;
                }
            }
            if(flag==1) break;
        }
    }

    return 0;
}
