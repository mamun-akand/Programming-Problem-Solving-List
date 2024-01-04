#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n;
	cout << "Enter amount:";
	cin >> n;
	cout << endl;
	ll sum = 0;
	sum += n / 500;
	n = n % 500;
	cout << "Currency count" << endl;
	cout << 500 << " " << sum << endl;
	ll one = 0;
	one += n / 100;
	n = n % 100;
	cout << 100 << " " << one << endl;
	ll fifty = 0;
	fifty += n / 50;
	n = n % 50;
	cout << 50 << " " << fifty << endl;
	ll ten = 0;
	ten += n / 10;
	n %= 10;
	cout << 10 << " " << ten << endl;
	ll five = 0;
	five = n / 5;
	n %= 5;
	cout << 5 << " " << five << endl;
	cout << 1 << " " << n << endl;
	return 0;
}
