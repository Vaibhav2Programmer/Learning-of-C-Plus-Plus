#include <iostream>
using namespace std;

// Program for searching the element in the array.

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, element, flag = 0, position = 0, index = 0;
	cin >> n;
	cin >> element;

	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
		{
			position = i + 1;
			flag = 1;
			index = i;
			break;
		}

	}

	if (flag == 1)
	{
		cout << "Element Found:" << element << "\n";
		cout << "Position of the Element:" << position << "\n";
		cout << "Index of the Element:" << index << "\n";
	}

	else
		cout << "Element Not Found";

	return 0;

}