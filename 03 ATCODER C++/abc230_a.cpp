#include<bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;

    if(a < 42)
        cout << "AGC" << setw(3) << setfill('0') << a << endl;
    else
        cout << "AGC" << setw(3) << setfill('0') << a+1 << endl;

    return 0;

}
