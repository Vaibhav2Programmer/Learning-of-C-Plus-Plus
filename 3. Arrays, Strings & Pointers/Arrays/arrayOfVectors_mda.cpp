#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

// Here, mda - multidimensional array created using array of vectors

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 3, n = 2;

	vector<int> arr[m];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			arr[i].push_back(12);

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)

			cout << arr[i][j] << " ";
}