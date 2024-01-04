#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int a[n], sum=0;

    for(int i=0 ; i<n ; i++)
        cin >> a[i];

    int Max = *max_element(a, a+n);

    for(int i=0 ; i<n ; i++)
        if(a[i]<Max) sum += Max - a[i];

    cout << sum << endl;
    return 0;
}
