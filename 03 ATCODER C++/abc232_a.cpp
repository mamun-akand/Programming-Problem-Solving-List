#include<bits/stdc++.h>
using namespace std;

int main(){

    string input;
    getline(cin, input);

    int x, y;

    x = int (input[0]) - int ('0');
    y = int (input[2]) - int ('0');

    cout << x*y;

    return 0;

}
