#include<bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int dif = A - B;
    cout << pow(32, dif) << endl;

    return 0;
}
