#include<bits/stdc++.h>
using namespace std;

// The difference between iterative and recursive binary search is that recursive binary search
// extra O(logn) space to store the called function in the function call stack.
// whereas time complexity is same for both O(logn).

int recursiveBinarySearch(int arr[], int low, int high, int n, int x)
{
	if (low > high) return -1; // base Case

	int mid = (low + high) / 2;

	if (arr[mid] == x) return mid;

	else if (arr[mid] > x)
		return recursiveBinarySearch(arr, low, mid - 1, n, x);

	else
		return recursiveBinarySearch(arr, mid + 1, high, n, x);
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

	int low  = 0, high = n - 1;

	int ans =  recursiveBinarySearch(arr, low, high, n, x);
	cout << ans;

	return 0;
}