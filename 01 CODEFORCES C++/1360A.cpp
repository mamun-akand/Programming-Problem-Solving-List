#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int a, b, s, l; cin>>a>>b;

        if(a<b){
            s = a*2;
            l = b;
        }
        else{
            s = b*2;
            l = a;
        }

        if(s>l) cout << s*s << endl;
        else cout << l*l << endl;
    }

    return 0;
}
