#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

int main(){
//    fast;

    ll a, b, c, cnt=0, ans;
    cin>>a>>b>>c;

    if(a==1) cnt++;
    if(b==1) cnt++;
    if(c==1) cnt++;

    if(cnt==3) ans = 3;
    else if(cnt==2){
        if(a==1 && c==1) ans = a+b+c;
        if(a==1 && b==1) ans = 2*c;
        if(b==1 && c==1) ans = a*2;
    }
    else if(cnt==1){
        if(a==1) ans = (a+b)*c;
        if(b==1) {
            if(a<c) ans = (a+b)*c;
            else ans = (b+c)*a;
        }
        if(c==1) ans = (b+c)*a;
    }
    else{
        ans = a*b*c;
    }
    cout << ans << endl;

    return 0;
}
