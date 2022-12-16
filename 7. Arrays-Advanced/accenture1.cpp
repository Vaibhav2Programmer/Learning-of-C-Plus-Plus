#include<bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int N, ans = 0;
	cin >> N;
	int A[N];

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (A[i] + A[j] >= A[i]*A[j])
			{
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}