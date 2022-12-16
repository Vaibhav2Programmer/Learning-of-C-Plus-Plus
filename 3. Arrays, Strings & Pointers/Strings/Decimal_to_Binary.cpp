#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string Decimal_to_Binary(int n)
{
	string s  = " ";

// We are taking input as an integer type but output be in string as string can store more
// than integers. therefore we convert remainders into a string using to_string function
// and then using reverse function as to convert into binary we read remainders from the
// bottom.

	while (n > 0)
	{
		int t = n % 2;
		s = s + to_string(t);
		n /= 2;
	}

	reverse(s.begin(), s.end());
	return s;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	string ans = Decimal_to_Binary(n);
	cout << ans;

	return 0;
}