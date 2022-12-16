#include<bits/stdc++.h>
using namespace std;

// We will check for the sum of the elements in the array is zero or not at some point
// which will tell us whether there is subarray or not.

bool isSubArray(int arr[], int n)
{


	for (int i = 0; i < n; i++)
	{
		int curr_sum = 0;
		for (int j = i; j < n; j++)
		{
			curr_sum = curr_sum + arr[j];

			if (curr_sum == 0)
				return true;
		}
	}

	return false;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 4, 13, -3, -10, 5};
	cout << isSubArray(arr, 6);
	return 0;
}