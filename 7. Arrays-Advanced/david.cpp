#include<bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int N, ans = 0, sum = 0;
	cin >> N;

	for (int i = N - 3; i < N; i++)
	{
		sum = sum + i;

	}
	cout << sum;

	return 0;

}