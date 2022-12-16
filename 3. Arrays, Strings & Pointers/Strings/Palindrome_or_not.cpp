#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str;
	cin >> str;

// Palindrome - string when read from starting and from behind, it turns out to be same.
// ex. - abcba, abba etc.

	int start = 0;
	int end = str.length() - 1;

	while (start < end) // (start <= end) condition can also be used
	{
		if (str[start] != str[end])
		{
			cout << "No";
			return 0;
		}
		else
		{
			start++;
			end--;
		}
	}

	cout << "Yes - It is a Palindrome";

}