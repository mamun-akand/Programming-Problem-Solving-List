#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, t;
    cin >> n >> t;

    string s1, s2;
    cin >> s1;

    int cnt = 1;

    while(t--){

        if(cnt%2 != 0){
            s2 = s1;
            for(int i=0 ; i<n ; i++){
                if(s1[i+1] == 'G' && s1[i] == 'B'){
                    s2[i+1] = 'B';
                    s2[i] = 'G';
                }
            }
            cnt++;
        }

        else {
            s1 = s2;
            for(int i=0 ; i<n ; i++){
                if(s2[i+1] == 'G' && s2[i] == 'B'){
                    s1[i+1] = 'B';
                    s1[i] = 'G';
                }
            }
            cnt++;
        }

    }

    if(cnt%2 != 0) cout << s1 << endl;
    else cout << s2 << endl;

    return 0;

}
