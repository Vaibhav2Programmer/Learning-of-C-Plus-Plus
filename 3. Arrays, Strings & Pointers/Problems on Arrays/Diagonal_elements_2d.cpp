#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[3][3] = {{10, 20, 30}, {16, 17, 18}, {4, 5, 6}}; // 2-D Array

// loop for printing left diagonal elements

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << "Left Diagonal elements are: " << arr[i][j] << endl;
			}
		}
	}

	cout << "\n";

// Loops for printing right diagonal elements
//(3-1 = 2 or n-1))

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i + j == 2)
				cout << "Right Diagonal elements are:" << arr[i][j] << "\n";
		}
	}

	return 0;
}