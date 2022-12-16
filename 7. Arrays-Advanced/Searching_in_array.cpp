#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int ele)
{
	int index = -1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == ele)
		{	index = i;
			break;
		}
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int ele, position, ans;

	cin >> ele;

	int arr[] = {5, 10, 11, 12, 6};
	ans = search(arr, 5, ele);
	cout << "Index of Found Element " << ans << endl;

	if (ans >= 0)
		cout << "Position Of Found Element " << ans + 1;

	return 0;

}