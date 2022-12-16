#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[8] = {10, 34, 57, 45};

	// Using Normal For Loop - for traversing

	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// Using for each loop

	for (int x : arr) {
		cout << x << " ";
	}

	return 0;
}