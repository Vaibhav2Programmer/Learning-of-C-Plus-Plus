#include <iostream>
using namespace std;

// Program to sort the array in the ascending or descending order.

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, temp;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];


	cout << "Array Before Sorting:" << "\n";

	for (int x : arr)
		cout << x << " ";

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "\n" << "\n" << "Array After Sorting:" << "\n";

	for (int x : arr)
		cout << x << " ";
}