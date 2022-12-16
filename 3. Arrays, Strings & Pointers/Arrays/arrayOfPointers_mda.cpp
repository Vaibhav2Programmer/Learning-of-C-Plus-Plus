#include<bits/stdc++.h>
using namespace std;

int main() {

// Here, mda - multidimensional array created using array of pointers

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 3, n = 2;

// This Method is similar to double pointers but here we do not create a double pointer
// instead we create a array of pointers (Stack Memory) and then allocate them
// individual rows dynamically of size n (On heap Memory).

	int *arr[m]; // First we create array of pointers

	for (int i = 0; i < m; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = 15;
			cout << arr[i][j] << " ";
		}


}