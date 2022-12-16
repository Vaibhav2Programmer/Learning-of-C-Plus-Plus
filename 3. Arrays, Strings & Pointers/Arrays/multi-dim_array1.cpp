#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 3, n = 2;

	int arr[m][n] = {{6, 5}, {7, 8}, {9, 1}}; // This is better way to initialize arrays
	// as other one generally does not give required output.

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}
	return 0;

}