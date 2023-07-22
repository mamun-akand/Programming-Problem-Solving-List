#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n; cin>>n;
	
	while(1){
	    if(n%2==0){
	        cout << n << " ";
	        n=n/2;
	    }
	    else{
	        cout << n << " ";
	        n=(n*3)+1;
	    }
	    if(n==1){
	        cout << 1 << endl;
	        break;
	    }
	}
	
	return 0;
}
