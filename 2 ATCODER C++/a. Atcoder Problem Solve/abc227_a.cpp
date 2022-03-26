#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, K, A;
    cin >> N >> K >> A;

    if(K>=N){
        int left = K - (N - A + 1);
        int rem = left%N;

        if(rem==0) cout << N << endl;
        else cout << rem << endl ;
    }

    else{
        int seq = (A-1) + K;

        if(seq <= N) cout << seq << endl;
        else cout << seq - N << endl;
    }

    return 0;
}
