#include<bits/stdc++.h>
using namespace std;

/* Selection Sort is an alogrithm of sorting an array/vector either in
increasing order or decreasing.
It first picks a first element and swap it with minimum element in whole array and
this process goes on unti we get the sorted array.

1. Space Somplexity - O(1)
2. Time Complexity - O(n^2)

*/

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int minIndex = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}
		swap(arr[minIndex], arr[i]);
	}
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[4] = {7, 9, 2, 1};
	selectionSort(arr, 4);
	printArray(arr, 4);


	return 0;
}