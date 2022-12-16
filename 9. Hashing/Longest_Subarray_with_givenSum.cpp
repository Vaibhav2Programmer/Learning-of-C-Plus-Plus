#include<bits/stdc++.h>
using namespace std;

int maxlen(int arr[], int n, int sum)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		int curr_sum = 0;

		for (int j = i; j < n; j++)
		{
			curr_sum += arr[j];

			if (curr_sum == sum)
			{
				res = max(res, j - i + 1);
			}
		}
	}

	return res;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {5, 8, -4, -4, 9, -2, 2};
	cout << maxlen(arr, 7, 5);

	return 0;
}