#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	if (n == 0 or n == 1) {
		cout << "Neither Prime Or Composite";
		return 0;
		// return 0 will give status of termination of program and the program will end there and
		// the further code lines won't run.
	}

	int i = 2;
	while (i < n) {

		if (n % i == 0) {
			cout << "No";
			return 0;
			// IN place of return 0 we can also use break statement with else as used for another condition
		}
		i++;
	}
	cout << "Yes";
	return 0;
}