#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, d=0, flag=1, f=0; cin>>n;

    for(int i=1; i<=n; i++){
        m = i;
        flag=1;
        for(int i=0; m>0 ; i++){
            d=m%10;
            if(d!=4 and d!=7){
                flag=0; break;
            }
            m=m/10;
        }
        if(flag==1 && (n%i==0)){
            f=1; break;
        }
    }

    if(f==1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
