#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

// Transpose of matrix is said to be when rows and columns gets interchanged and the
// principal(left) diagonal elements remain the same.

	int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[i][j] << " ";

		cout << endl;
	}

	cout << "\n";

// One Way to print the transpose of matrix is to first print columns then print rows
// by writing arr[j][i]

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << arr[j][i] << " ";

		cout << endl;
	}

// Another Way to print the transpose of a matrix.

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)

			b[j][i] = arr[i][j];
	}

	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << b[i][j] << " ";

		cout << "\n";
	}
}