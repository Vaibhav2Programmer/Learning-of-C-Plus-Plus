#include<bits/stdc++.h>
using namespace std;



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, position, element;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n - 1; i++) {
		cin >> arr[i];
	}

	cout << "Enter a Position Of Index and element to be inserted : \n";
	cin >> position >> element;

	for (int i = n - 1; i >= position; i--) {
		arr[i + 1] = arr[i];
	}

	arr[position] = element;

	for (int x : arr) {
		cout << x << " ";
	}

	return 0;
}