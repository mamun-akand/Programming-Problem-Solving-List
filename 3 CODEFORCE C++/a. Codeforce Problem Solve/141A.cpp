#include<bits/stdc++.h>
using namespace std;

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    a = a+b;

    sort(a.begin(), a.end());
    sort(c.begin(), c.end());

    int x = a.compare(c);

    if(x==0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;

}
