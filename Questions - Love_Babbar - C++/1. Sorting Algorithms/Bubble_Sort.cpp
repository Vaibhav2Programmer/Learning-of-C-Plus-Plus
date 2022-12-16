#include<bits/stdc++.h>
using namespace std;

/* Bubble sort sort the array by comparing the adjacent elements and swaping them

Time Complexity - O(n^2)
Space Complexity - O(1)

Best Time Complexity - O(n) - Already Sorted

*/

void bubbleSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		bool swapped = false;
		// For Round 1 to Round n-1

		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
		{
			break;  // ALready sorted ho chuka hai
		}
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int ex[6] = {8, 22, 7, 9, 31, 5};
	bubbleSort(ex, 6);

	return 0;
}