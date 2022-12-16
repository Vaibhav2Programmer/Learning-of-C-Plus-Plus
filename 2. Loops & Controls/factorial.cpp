#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, ans = 1;
	cin >> n; // Enter a number u want factorial of.

	while (n > 0)
	{
		ans = ans * n;
		n--;
	}

	cout << ans;
	return 0;

}

