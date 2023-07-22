#include<bits/stdc++.h>
using namespace std;

int main(){
//    int t; cin >> t;
//
//    while(t--){
        int n, p, k, l=0;
        cin >> n >> p >> k;

        string x, y, z;
        cin >> x >> y;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        for(int i=0, m=0; ; ){

            if(x[i]<y[m]){
                z[l]=x[i]; l++;
                for( ; i<k-1 ; i++){
                    if(x[i]==x[i+1]) {z[l] = x[i+1]; l++;}
                }
                if(i==k-2){
                    z[l] = y[m];
                    l++; m++;
                }
                if(i+1==n || m+1==p) break;
            }
            else{
                z[l]=y[m]; l++;
                for( ; m<k-1 ; m++){
                    if(y[m]==y[m+1]) {z[l] = y[m+1]; l++;}
                }
                if(m==k-2){
                    z[l] = x[i];
                    l++; i++;
                }
                if(i+1==n || m+1==p) break;
            }

        }
        cout << z << endl;
//    }
    return 0;
}
