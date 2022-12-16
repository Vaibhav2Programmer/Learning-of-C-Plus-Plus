#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

	int b[2][3] = {{1, 2, 3}, {4, 5, 6}};

	int c[3][3], i, j, k;

// So, the column of first matrix should be equal to the row of the second matrix.
// here in first matrix a[3][2] and b[2][3], we have equal column and row as 2.

// Loops for multiplication

	for ( i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = 0;

			for (k = 0; k < 2; k++)
			{

				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)

			cout << c[i][j] << " ";

		cout << endl;

	}

	return 0;
}