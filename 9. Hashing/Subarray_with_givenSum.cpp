#include<bits/stdc++.h>
using namespace std;

// Here to find the pre_sum with given sum we will subtract sum from the pre_sum
// (pre_sum - sum)

bool isSum(int arr[], int n, int sum)
{
	unordered_set <int> s; // Hash table where we will insert pre_sum and search for it.
	int pre_sum = 0;

	for (int i = 0; i < n; i++)
	{
		pre_sum = pre_sum + arr[i];

		if (pre_sum == sum)
			return true;

		if (s.find(pre_sum - sum) != s.end()) // Finding in the hash table pre_sum - sum is present or not.
			return true;

		s.insert(pre_sum);
	}

	return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {5, 8, 6, 13, 3, -1};
	cout << isSum(arr, 6, 22);
	return 0;
}