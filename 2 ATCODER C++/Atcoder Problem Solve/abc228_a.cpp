#include<bits/stdc++.h>
using namespace std;

int main(){

    int s, t, x, flag = 0;
    cin >> s >> t >> x;

    if(s<t){
        if(x >= s && x<t) flag = 1;
    }

    else if(s>t){
        if(x>=s && x<=23) flag = 1;
        else if(x>=0 && x<t) flag = 1;
    }

    if(flag==1) cout << "Yes" << endl;
    else if(flag==0) cout << "No" << endl;

    return 0;

}
