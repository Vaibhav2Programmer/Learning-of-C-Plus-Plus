#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[3][3] = {{10, 20, 30}, {16, 17, 18}, {4, 5, 6}};



	// Row SUm loops

	for (int i = 0; i < 3; i++)
	{
		int row_sum = 0;

		for (int j = 0; j < 3; j++)
		{
			row_sum = row_sum + arr[i][j];
		}

		cout << "Sum of " << i + 1 << " Row: " << row_sum << "\n";
	}

	cout << endl;

// Column_Sum Loops

	for (int i = 0; i < 3; i++)
	{
		int column_sum = 0;

		for (int j = 0; j < 3; j++)
		{
			column_sum = column_sum + arr[j][i];
		}

		cout << "Sum of " << i + 1 << " Column: " << column_sum << "\n";
	}



	return 0;
}