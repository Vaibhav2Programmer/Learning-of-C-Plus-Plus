#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n; // Enter a no. to find all the divisors

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout << i << " ";
	}
}