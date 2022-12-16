#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, val = 0, base = 1;
	cin >> n;

	while (n > 0) {
		int last_digit = n % 10;
		val = val + (last_digit * base);
		n = n / 10;
		base = base * 2;

	}

	cout << val;

}