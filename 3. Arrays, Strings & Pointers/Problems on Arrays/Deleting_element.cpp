#include<iostream>
using namespace std;

// Deleting an element from the array

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, element;
	cin >> n >> element;

	int index = n - 1;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Array by the User: \n";

	for (int x : arr)
		cout << x << " ";



	for (int i = 0; i <= index; i++)
	{
		if (arr[i] == element)
		{
			for (int j = i + 1; j <= index; j++)
				arr[j - 1] = arr[j];

			index--;
			i--;
		}

	}

	cout << "\n" << "Array after Removing the Element:\n" ;

	for (int i = 0; i <= index; i++)
		cout << arr[i] << " ";

	return 0;
}