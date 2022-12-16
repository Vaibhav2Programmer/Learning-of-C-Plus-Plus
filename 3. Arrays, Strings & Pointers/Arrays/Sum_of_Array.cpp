#include<iostream>
using namespace std;

int sum_array(int arr[], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	cout << sum;
	return 0;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sum_array(arr, n);

	return 0;
}