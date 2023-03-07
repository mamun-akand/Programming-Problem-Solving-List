#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	string s, x; cin >> s;
	for(int i = 0; i < n; i++){
		int f = int(s[i]) - 48;
		if(s[i + 2] != '0') x += char(96 + f);
		else{
			int a = int(s[i]) - 48;
			int b = int(s[i + 1]) - 48;
			int sum = (a * 10) + b;
			x += char(96 + sum); i += 2;
		}
	}
	cout << x << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}