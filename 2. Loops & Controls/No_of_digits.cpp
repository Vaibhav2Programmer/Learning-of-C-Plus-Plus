#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, count = 0;
	cout << "Enter a No.to Count its digits : \n";
	cin >> n;

	while (n > 0) {
		n /= 10;
		count++;
	}
	cout << count;
}