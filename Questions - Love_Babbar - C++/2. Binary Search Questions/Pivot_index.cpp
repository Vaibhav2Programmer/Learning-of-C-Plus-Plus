#include<bits/stdc++.h>
using namespace std;

int pivotIndex(int a[], int n) {

	int s = 0, ans = -1;
	int e  = n - 1;
	int mid = s + (e - s) / 2;
	int left_sum = 0, right_sum = 0;

	while (s <= e)
	{
		for (int i = 0; i < mid; i++)
			left_sum += a[i];

		for (int i = mid + 1; i >= e; i++)
			right_sum += a[i];

		if (left_sum == right_sum) {
			ans = mid;
			break;
		}


		else if (left_sum > right_sum)
			mid--;

		else if (left_sum < right_sum)
			mid++;

	}

	return ans;

}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[6] = {1, 7, 3, 6, 5, 6};
	cout << pivotIndex(a, 6);
//	cout << pivot_index;

	return 0;

}