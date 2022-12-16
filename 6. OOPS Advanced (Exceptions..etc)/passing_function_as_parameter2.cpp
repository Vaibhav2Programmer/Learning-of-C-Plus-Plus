#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int x, int y) {return abs(x) < abs(y);}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {2, 4, -1, -9, 8};
	int n = sizeof(arr) / sizeof(arr[0]);


	sort(arr, arr + n, compare); // sorting with respect to absolute value by passing

// compare function as a parameter.

	for (int i : arr)
		cout << i << " ";




	/* Sorting normally

		sort(arr, arr + n);

		for (int x : arr)
			cout << x << " ";
	*/
	return 0;

}