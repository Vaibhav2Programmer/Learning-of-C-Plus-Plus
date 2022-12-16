#include<bits/stdc++.h>
using namespace std;

// We will count distinct elements using hashtable where we know set does not allow duplicates.

int countDistinct(int arr[], int n)
{
	unordered_set<int> count;

	for (int i = 0; i < n; i++)
	{
		count.insert(arr[i]);
	}

	return count.size();
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

	cout << countDistinct(arr, n);


	return 0;
}