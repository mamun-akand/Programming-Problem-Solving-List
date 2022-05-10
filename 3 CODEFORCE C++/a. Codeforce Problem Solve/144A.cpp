#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, mx=0, mn=101, mx_ind, mn_ind;
    cin  >> n;

    int a[n];

    for(int i=0 ; i<n ; i++){
        cin >> a[i];

        if(a[i]>mx){
            mx = a[i];
            mx_ind = i;
        }

        if(a[i]<=mn){
            mn = a[i];
            mn_ind = i;
        }
    }

    if(mx_ind < mn_ind)
        mn_ind = ( (n-1) - mn_ind );

    else
        mn_ind = ( (n-1) - (mn_ind+1) );

    cout << mx_ind+mn_ind << endl;

    return 0;

}
