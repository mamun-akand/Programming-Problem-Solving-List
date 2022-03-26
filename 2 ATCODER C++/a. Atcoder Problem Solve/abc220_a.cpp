#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;


    for(int i=2 ; ; i++){
        if(a<b){
            if(c*i >= a && c*i <= b){
                cout << c*i << endl;
                break;
            }
            else if(c*i > b){
                cout << -1 << endl;
                break;
            }
        }

        else{
            if(c*i >= b && c*i <= a){
                cout << c*i << endl;
                break;
            }
            else if(c*i > a){
                cout << -1 << endl;
                break;
            }

        }

    }

    return 0;

}
