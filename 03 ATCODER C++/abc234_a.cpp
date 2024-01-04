#include<bits/stdc++.h>
using namespace std;

int val(int t);

int main(){

    int a;
    cin >> a;

    cout << val(val(val(a)+a) + val(val(a))) << endl;

    return 0;

}


int val(int t){
    int x = t*t+2*t+3;
    return x;
}

