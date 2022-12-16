#include<bits/stdc++.h>
using namespace std;

/* Here, We will use hashing and prefix sum to determine whether there is an
subarray or not present.
Prefix_sum - cumulative sum from begining(0th index) to the ith index.
and if we see prefix_sum repeating then there is subarray from the element
after the first prefix_sum to the next repatation of the prefix sum
*/

bool isSubArray(int arr[], int n)
{
	unordered_set<int> s; // We created a hash table named s.

	int pre_sum = 0;

	for (int i = 0; i < n; i++)
	{
		pre_sum = pre_sum + arr[i];

		if (s.find(pre_sum) != s.end()) // We will look for the presum if it is already present in the hash table, if it is we will return true.
			return true;

		if (pre_sum == 0) // Corner Case
			return true;

		s.insert(pre_sum); // Here now we will insert the presum. Bcoz if we insert it before then it will laways be true.
	}

	return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 4, 13, 3, -10, 5};
	cout << isSubArray(arr, 6);
	return 0;
}