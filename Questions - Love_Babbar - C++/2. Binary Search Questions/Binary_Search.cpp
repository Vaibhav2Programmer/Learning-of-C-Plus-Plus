#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int size, int key)
{
	int start = 0;
	int end = size - 1;

	int mid = start + (end - start ) / 2;
	// We are using this formula to avoid getting out of range when big values are provided.
	// It works the same as (start + end)/2

	while (start <= end)
	{
		if (a[mid] == key) {
			return mid;
		}

		else if (key > a[mid]) { // Go to right wala part
			start = mid + 1;
		}

		else if (key < a[mid]) { //
			end = mid - 1;
		}

		mid = start + (end - start) / 2;
	}
	return -1;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int even[6] = {2, 4, 6, 8, 10, 12};
	int odd[5] = {21, 17, 9, 3, 1};

	int ans = binarySearch(even, 6, 10);
	int res = binarySearch(odd, 5, 21);

	cout << ans << endl;
	cout << res;

	return 0;
}