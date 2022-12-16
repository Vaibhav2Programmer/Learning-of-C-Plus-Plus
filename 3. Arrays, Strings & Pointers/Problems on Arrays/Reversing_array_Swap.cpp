#include<iostream>
using namespace std;

// Reversing an array using swap method

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

	int start = 0, end = n - 1;

	while (start <= end)
	{
		swap(arr[start], arr[end]);
		start++;
		end--;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}