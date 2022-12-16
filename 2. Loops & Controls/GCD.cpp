#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b, ans = 1;
	cout << "Enter 2 No. To find Greatest Common Divisor : \n";
	cin >> a >> b;

	int x = min(a, b);

	for (int i = 1; i <= x; i++) {
		if (a % i == 0 and b % i == 0)
			ans = i;
	}
	cout << ans;
}