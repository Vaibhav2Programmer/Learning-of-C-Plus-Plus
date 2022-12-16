#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, a = 1, b = 1, c;
	cin >> n; // Enter upto which nth number u want

	cout << "1 1 ";
	for (int i = 3; i <= n; i++)
	{
		c = a + b;

		cout << c << " ";

		a = b;
		b = c;

	}
}