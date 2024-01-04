#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    int d = a<b ? a : b;
    int s = a<b ? (b-a)/2 : (a-b)/2;

    cout << d << " " << s << endl;

    return 0;

}
