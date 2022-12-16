#include<bits/stdc++.h>
using namespace std;

// We need to search an K integer in an sorted rotated array.
// first we find pivot in an array and then using 2 conditions we will see
// whether to apply binary search on first line or second line.


int pivotElement(int a[], int n)
{
	int s = 0, e = n - 1;
	int mid = s + (e - s) / 2;

	while (s < e)
	{
		if (a[mid] >= a[0])
		{
			s = mid + 1;
		}

		else {
			e = mid;
		}

		mid = s + (e - s) / 2;
	}

	return s;
}

int binarySearch(int a[], int s, int e, int key)
{

	int start = s, end = e;
	int mid = start + (end - start) / 2;

	while (start <= end)
	{
		if (a[mid] == key)
			return mid;

		else if (key > a[mid]) // right waala part
			start = mid + 1;

		else if (key < a[mid]) // Left waala part
			end = mid - 1;

		mid = start + (end - start) / 2;

	}

	return -1;
}


int findPosition(int a[], int n, int key)
{

	// First we will find pivot element using the pivotElement Function.

	int pivot = pivotElement(a, n);

// Condition for Second Line.

	if (key >= a[pivot] && key <= a[n - 1])
	{
		return binarySearch(a, pivot, n - 1, key);
	}

	else { // Condition for thr first Line.
		return binarySearch(a, 0, pivot - 1, key);
	}

}


int main()
{



#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int rotar[] = {7, 9, 1, 2, 3};
	cout << findPosition(rotar, 5, 7);

	return 0;
}