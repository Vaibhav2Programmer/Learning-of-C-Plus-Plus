#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int i, n;
	cout << "Enter a no. to find next Prime : \n";
	cin >> n;

	while (true) {
		n++;
		for ( i = 2; i <= n - 1; i++) {
			if (n % 2 == 0) {
				break;
			}
		}

		if (i == n) {
			cout << n;
			return 0;
		}
	}
}