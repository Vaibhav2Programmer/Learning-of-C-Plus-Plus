#include <iostream>
using namespace std;

void binary_to_decimal(string s)
{
	int base = 1;
	int ans = 0;

	int size = s.length();

//	Since Binary contains only 1 and zeros we need to convert character 1 and 0 to integer
// one therefore we use integer typecasting (int)(s[i] - '0')

	for (int i = size - 1; i >= 0; i--)
	{
		ans = ans + ((int)(s[i] - '0') * base);

		base = base * 2;
	}

	cout << ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	binary_to_decimal(s);

	return 0;
}