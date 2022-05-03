#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string wrd;
    cin >> wrd;

    int cnt = 0;

    for(int i=0 ; i<n ; i++){
        if(wrd[i]==wrd[i+1]) cnt++;
    }

    cout << cnt << endl;

    return 0;

}
