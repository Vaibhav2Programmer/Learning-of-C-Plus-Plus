#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[3][3] = {{1, 3, 5}, {7, 9, 11}, {13, 15, 17}};

	int b[3][3] = {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}};

	int c[3][3], i, j;

	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}


	for (i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << c[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}