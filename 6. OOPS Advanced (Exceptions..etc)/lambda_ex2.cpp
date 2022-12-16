#include<bits/stdc++.h>
using namespace std;

// We can also create an variable instead of writing the whole code in the function
// and pass that variable instead to the requird function.


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = { -1, 4, -10, 2, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	auto mylmb = [](int x, int y) {return abs(x) > abs(y);};

	// Sorting accor to abs values but in dec. order.

	sort(arr, arr + n, mylmb);

	for (auto x : arr)
		cout << x << " ";

	return 0;

}