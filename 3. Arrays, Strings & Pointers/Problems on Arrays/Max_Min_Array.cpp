#include <iostream>
using namespace std;

int findmax(int arr[], int n)
{
	int ans = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > ans)
			ans = arr[i];
	}

	return ans;
}

int findMin(int arr[], int n)
{
	int ans = arr[0];

	for (int i = 0; i < n; i++)
	{
		if (ans > arr[i + 1])
			ans = arr[i + 1];

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

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	n = sizeof(arr) / sizeof(arr[0]);

	int Max_value = findmax(arr, n);

	int Min_value = findMin(arr, n);

	cout << "Maximum Value in array is:" << Max_value << "\n";
	cout << "Minimum Value in array is:" << Min_value << "\n";

}