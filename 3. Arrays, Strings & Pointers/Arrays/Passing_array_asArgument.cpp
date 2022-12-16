#include<bits/stdc++.h>
using namespace std;

void print(int **arr, int m, int n) {

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
}

int main() {

// Using double pointers

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 3, n = 2;
	int **arr;

	arr = new int *[m];

	for (int i = 0; i < m; i++) {

		arr[i] = new int [n];

		for (int j = 0; j < n; j++) {
			arr[i][j] = j + i + 1;

		}
	}

	print(arr, 3, 2);

	return 0;
}