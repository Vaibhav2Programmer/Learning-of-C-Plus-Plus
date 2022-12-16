#include <iostream>
using namespace std;

// Insertion of an element at a given place

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, element, index;
	cin >> n;
	cin >> element >> index;

	int arr[n];

	for (int i = 0; i < n - 1; i++)
		cin >> arr[i];

	for (int i = n - 1; i >= index; i--)
	{

		arr[i + 1] = arr[i];
	}

	arr[index] = element;

	for (int x : arr)
		cout << x << " ";
}