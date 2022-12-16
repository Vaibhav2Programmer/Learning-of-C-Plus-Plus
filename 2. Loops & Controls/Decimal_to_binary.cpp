#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, quotient, remainder;
	cin >> n;
	int i = 1;
	while (n > 0) {
		remainder = n % 2;
		n /= 2;

	}
	cout << remainder;

	// Here To print binary values from bottom to top we can use vector.
}