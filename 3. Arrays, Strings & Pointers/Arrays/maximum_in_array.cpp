#include <bits/stdc++.h>
using namespace std;

int find_max(int arr[], int n)
{
	int ans = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > ans)
			ans = arr[i];
	}

	return ans;
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

	int ans = find_max(arr, n);

	// Here we are passing the the array as well as its size.

	cout << ans;
}