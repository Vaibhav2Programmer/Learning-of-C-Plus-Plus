#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s, pattern;
	cin >> s >> pattern;

	int ans = s.find(pattern);

	while (ans != string::npos)
	{
		cout << "Pattern Found at index " << ans << endl;

		ans = s.find(pattern, ans + 1);

	}

	return 0;
}