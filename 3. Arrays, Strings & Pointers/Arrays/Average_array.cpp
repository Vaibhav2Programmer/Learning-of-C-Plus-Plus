#include<iostream>
using namespace std;

double average_array(int arr[], int n) {

	double sum = 0;

//	int elements = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < n; i++) {

		sum += arr[i];
	}

	return sum / n; // typecasting so ans does not come in integer type.
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

	double average = average_array(arr, n);

	cout << average;
}