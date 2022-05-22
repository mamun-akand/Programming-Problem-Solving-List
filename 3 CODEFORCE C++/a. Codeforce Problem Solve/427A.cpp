#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, p=0, cnt=0;
    cin >> n;

    while(n--){

        int a;
        cin >> a;

        if(p==0 && a==-1) cnt++;
        else if(p>0 && a==-1) p--;

        if(a>0) p+=a;

    }

    cout << cnt << '\n';

    return 0;

}
