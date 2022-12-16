#include<bits/stdc++.h>
using namespace std;

// Here, we will use hashmap to store not only the prefix sum but also their indexes
// but here we will only the first or most-left apperance of prefix sum
// as they we wanted to get the longest subarray.

int maxlen(int arr[], int n, int sum)
{
	unordered_map<int, int> m; // Hashmap where we will store values as {(pre_sum,its index)}
	int pre_sum = 0, ans = 0;

	for (int i = 0; i < n; i++)
	{
		pre_sum += arr[i];

		if (pre_sum == sum) {ans = i + 1;}

		if (m.find(pre_sum) == m.end()) // Writing this case to handle and insert only the one and most-left appearance of the presum.
		{
			m.insert({pre_sum, i}); // It will insert only when there is no existing presum there in hashmap.
		}

		if (m.find(pre_sum - sum) != m.end())
			ans = max(ans, i - m[pre_sum - sum]); // m[pre_sum - sum] = index which we are subtracting
		// first case - 8 i.e, m[12-8] = 0
		// Second Case - 17 i.e. 3


	}

	return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
	cout << maxlen(arr, 8, 5);
	return 0;
}