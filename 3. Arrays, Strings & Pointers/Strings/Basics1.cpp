#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str = "gfg";
	cout << str.length() << "\n";

//length() returns the length of the string or we can say no. of characters in the string

	str = str + ".com";
	cout << str << "\n";
	cout << str.substr(0, 5) << " ";

// substr() returns the small part of that string input as from beginning index
// and no. of characters to fe fetched from that index

// To fetch whole string we can also use substr from beginning index as one input argument
// without telling no. of characters to be fetched as substr will fetch all characters
// from that index.

	cout << str.substr(0) << "\n";

	cout << str.find(".com") << " \n";

// find function helps us to find if that given string is present as a substring in
// string.

	int res = str.find("eeks");

	cout << res;

	return 0;
}