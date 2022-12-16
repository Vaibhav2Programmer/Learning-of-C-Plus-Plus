#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int r, l;
	cin >> r >> l;

	int arr[r][l];

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < l; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < l; j++)
			cout << arr[i][j] << " ";

		cout << endl;
	}

// Basic method of giving input - declaring first

	int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

// Another way of initializing - int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[i][j] << " ";

		cout << endl;
	}

	return 0;
}