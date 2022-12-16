#include<bits/stdc++.h>
using namespace std;

int distinct_element(int arr[], int n) {
	int elements = 0;
	bool isDistinct = true;

	for (int i = 0; i < n; i++) {
		isDistinct = true;

		for (int j = i - 1; j >= 0; j--) {
			if (arr[i] == arr[j]) {
				isDistinct = false;
				break;
			}
		}

		if (isDistinct == true)
			elements++;
	}
	return elements;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cout << "Enter a no. for the size of an array : \n";
	cin >> n;

	int arr[n];

	// To take a input for an array we use for loop -

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << distinct_element(arr, n); // Here we are passing the values of array with
	// value n.

	return 0;
}