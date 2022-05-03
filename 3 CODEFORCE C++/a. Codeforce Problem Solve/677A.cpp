#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, h, sum=0, num;
    cin >> n >> h;

    vector <int> vec;

    for(int i=0 ; i<n ; i++){

        cin >> num;
        vec.push_back(num);

        if(vec[i] <= h) sum++;
        else sum += 2;

    }

    cout << sum << endl;

    return 0;

}
