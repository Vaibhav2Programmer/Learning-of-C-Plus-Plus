#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++) // This loop is for spacing.
			cout << ".";

		for (int k = 1; k <= i; k++) // This loop for printing stars.
			cout << "*";

		cout << "\n";
	}
}