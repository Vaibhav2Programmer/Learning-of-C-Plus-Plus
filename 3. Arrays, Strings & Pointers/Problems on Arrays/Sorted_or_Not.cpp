#include <iostream>
using namespace std;

// Program to check if input array is sorted or not

bool SortedOrNot(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	if (SortedOrNot(arr, n) == false)
		cout << "Array Not Sorted";
	else
		cout << "Array Sorted";

	return 0;
}