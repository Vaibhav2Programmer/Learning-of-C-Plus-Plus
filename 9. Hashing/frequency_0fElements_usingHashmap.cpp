#include<bits/stdc++.h>
using namespace std;

// In this linear solution of time complexity we use hashmap where we not only store the
// array elements but also their frequencies as key value pairs.
// The order can be varied according to the array in the output.

void frequency(int arr[], int n)
{
	unordered_map<int, int> f; // Here, both key and value is integer type .

	for (int i = 0; i < n; i++)
		f[arr[i]]++;

	for (auto e : f)
	{
		cout << e.first << " " << e.second << endl;
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	frequency(arr, n);


	return 0;
}