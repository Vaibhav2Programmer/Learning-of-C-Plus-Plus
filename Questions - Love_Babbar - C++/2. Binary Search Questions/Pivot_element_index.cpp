#include<bits/stdc++.h>
using namespace std;

// Sorted array where we find an pivot element index.
// Pivot element - minimum value in an graph gives pivot element.

int pivotElement(int a[], int n)
{

	int s = 0, e = n - 1;
	int mid = s + (e - s) / 2;

	while (s < e)
	{
		if (a[mid] >= a[0]) // It means it is present in first line.
		{
			s = mid + 1;
		}

		else { // which means mid lies on 2nd line

			e = mid;
		}

		mid = s + (e - s) / 2;
	}

	return s; // We can also return e

}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {3, 8, 10, 17, 1};

	cout << pivotElement(a, 5);

	return 0;

}