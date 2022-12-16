#include<bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, n;
	cin >> n >> x;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int ans = -1;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > x) {
			ans = arr[i];
			break;
		}
	}

//	if (ans == -1)
//		cout << "-1";

	cout << ans;

	return 0;
}