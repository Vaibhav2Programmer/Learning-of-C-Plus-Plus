/*Problem Statement
We want to return the minimum no of pages as a ans from the no of options we can
have.
Given we have array of integers where arr[i] denotes the no. of Pages.
*/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{

	int studentCount = 1;
	int pageSum = 0;

	for (int i = 0; i < n; i++)
	{
		if (pageSum + arr[i] <= mid)
		{
			pageSum += arr[i];
		}
		else
		{
			studentCount++;
			if (studentCount > m || arr[i] > mid)
			{
				return false;
			}
		}
	}
	return true;

}

int allocateBooks(int arr[], int n, int m)
{
	int s = 0, ans = -1;
	int sum = 0; // Will take sum of all pages and give this to e/end which will
	// make our search space. from s to e.

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	int e = sum;

	int mid = s + (e - s) / 2;

	while (s <= e)
	{

		if (isPossible(arr, n, m, mid))
		{
			ans = mid;
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int books[4] = {10, 20, 30, 40};
	int n = 4, m = 2; // m = students, n = pages

	cout << "Minimum no. of Pages = " << allocateBooks(books, n, m);

	return 0;

}