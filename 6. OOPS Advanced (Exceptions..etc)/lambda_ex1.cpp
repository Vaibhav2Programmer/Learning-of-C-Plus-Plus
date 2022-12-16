#include<iostream>
#include<algorithm>
using namespace std;

// Lambda expressions are anonymous functions which can be provided to the function
// for providing the functionality.
// lambda function are used to write small functions/functionality without
// writing the function.

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = { -1, 4, -10, 2, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n, [] (int x, int y) {return abs(x) < abs(y);});

	for (auto x : arr)
		cout << x << " ";

	return 0;
}