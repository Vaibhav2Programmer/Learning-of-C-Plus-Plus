#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str;
	cin >> str;

	string outputstring = " ";

	int i = str.length() - 1;

	while (i >= 0)
	{
		outputstring = outputstring + str[i];
		i--;
	}

	cout << outputstring;
}