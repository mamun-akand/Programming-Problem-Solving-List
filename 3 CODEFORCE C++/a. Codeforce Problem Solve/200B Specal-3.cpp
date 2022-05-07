#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, sum=0, p;
    cin >> n;

    for(int i=0 ; i<n ; i++){
        cin >> p;
        sum += p;
    }

    double f = (double) sum / n;

    cout << fixed << setprecision(12);
    cout << f << endl;

    return 0;

}
