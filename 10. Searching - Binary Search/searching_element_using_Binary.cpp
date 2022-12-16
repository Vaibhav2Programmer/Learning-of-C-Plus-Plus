#include<bits/stdc++.h>
using namespace std;


int biSearch(int arr[], int n, int x)
{
	int low = 0, high = n - 1;

	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		if (arr[mid] == x)
			return mid;

		else if (arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return -1;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, x;
	cin >> n >> x;


	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int ans =  biSearch(arr, n, x);
	cout << ans;

	return 0;
}