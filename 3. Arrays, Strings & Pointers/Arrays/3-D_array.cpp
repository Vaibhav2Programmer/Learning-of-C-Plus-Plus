#include<bits/stdc++.h>
using namespace std;

int main() {

// This is a 3-D Array

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 2, n = 3, l = 4;

	int arr[m][n][l] =
	{
		{ {1, 6, 4}, {9, 7, 4}, {2, 4, 6} },
		{ {6, 4, 2}, {1, 6, 2}, {7, 9, 8} }
	};

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < l; k++)
				cout << arr[i][j][k] << " ";

	return 0;
}