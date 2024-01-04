#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n, q_od, q_ev, s_od, s_ev;
    cin >> n;

    q_od = (n%2!=0) ?  (n+1)/2 : (n/2) ;
    q_ev = n/2;

    s_od = q_od * q_od ;
    s_ev = (q_ev*q_ev) + q_ev ;

    cout << s_ev - s_od << endl;

    return 0;

}
