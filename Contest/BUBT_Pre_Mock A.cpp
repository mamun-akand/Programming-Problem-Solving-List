#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main(){
    //fast;
    while(1){
        ll n; cin>>n;
        if(n==0) break;

        if(n%17==0) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
