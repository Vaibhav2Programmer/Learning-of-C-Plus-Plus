#include<bits/stdc++.h>
using namespace std;

int main() {

// Here, mda - multidimensional array created using double pointers

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 3, n = 2;

// First we create a double pointer named arr which will point to array of pointers in which
// individual arrays dynamically allocate memmory to individual rows of n elements

	int **arr; // Double Pointer is created named arr

	arr = new int *[m];
// We create a array of pointers whose address is stored in arr

	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
// Here we allocate individual rows of size n and store their first address as arr[i]
	}

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 10;
			cout << arr[i][j] << " ";
		}

	return 0;

}