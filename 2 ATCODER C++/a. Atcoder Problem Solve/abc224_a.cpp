#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    int len = str.length();

    if(str[len-1] == 'r')
        cout << "er" << endl;
    else
        cout << "ist" << endl;

    return 0;
}
