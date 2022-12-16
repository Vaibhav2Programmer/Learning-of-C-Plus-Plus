/* Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ans = 0, x;

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> x;

	while (x != 0)
	{
		int digit = x % 10;

		if (digit > 0)

			ans = ans * 10 + digit;

		x = x / 10;
	}

	cout << ans;

}