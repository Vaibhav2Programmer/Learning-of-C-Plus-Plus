#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << "Enter No.s to find the LCM : \n";
	int a, b;
	cin >> a >> b;

	int start = max(a, b);
	int end = a * b;
	int ans = start;


	for (int i = start; i <= end; i++) {
		if (i % a == 0 and i % b == 0) {
			ans = i;
			break;
		}
	}
	cout << ans;
	return 0;
}