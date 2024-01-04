#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    int turn=1, ser=0, dim=0;

    for(int i=0; i<n; i++){
        auto b = v.begin();
        auto e = v.end()-1;

        if(turn%2==1){
            ser += *b > *e ? *b : *e;
            auto it = *b > *e ? b : e;
            v.erase(it);
            turn++;
        }
        else{
            dim += *b > *e ? *b : *e;
            auto it = *b > *e ? b : e;
            v.erase(it);
            turn++;
        }
    }
    cout << ser << " " << dim << endl;
    return 0;
}
