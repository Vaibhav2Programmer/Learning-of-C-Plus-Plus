#include <bits/stdc++.h>
using namespace std;

// Use of Binary Serach

int peakIndex(int a[], int n)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;

	while (s < e)
	{
		if (a[mid] < a[mid + 1])
		{
			s = mid + 1;
		}

		else {
			e = mid;
		}

		mid = s + (e - s) / 2;
	}
	return e; // We can also return e/end in place of start/s.
// Because at the end both of them come at same places or the peak element.

}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr1[3] = {0, 1, 0};
	int arr2[4] = {3, 4, 5, 1};

	cout << peakIndex(arr1, 3) << endl;
	cout << peakIndex(arr2, 4);

}