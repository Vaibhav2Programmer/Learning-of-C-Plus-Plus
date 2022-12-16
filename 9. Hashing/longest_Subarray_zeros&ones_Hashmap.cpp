/* In this question we will have only binary array consisting of only zeros and ones, but here
we will convert the zeros into -1 so the problem becomes longest subarrat with zero sum and we can
make use of prefix sum */

// sum = 0

#include<bits/stdc++.h>
using namespace std;

int longestZeroSubaaray(int arr[], int n)
{
	// First Convert Zeros into ones.

	for (int i = 0; i < n; i++)
	{	arr[i] = (arr[i] == 0) ? -1 : 1;}

	unordered_map<int, int> z;
	int pre_sum = 0, ans = 0;

	for (int i = 0; i < n; i++)
	{
		pre_sum += arr[i];

		if (pre_sum == 0) {ans = i + 1;}

		if (z.find(pre_sum) == z.end())
			z.insert({pre_sum, i});

		if (z.find(pre_sum) != z.end())
			ans = max(ans, i - z[pre_sum]);
	}

	return ans;
}



int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 0, 1, 1, 1, 0, 0};
	cout << longestZeroSubaaray(arr, 7);

	return 0;
}