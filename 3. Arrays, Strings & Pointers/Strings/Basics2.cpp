#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1 = "bac";
	string s2 = "acd";

	if (s1 == s2)
		cout << "Same";
	else if (s1 < s2)

		cout << "Smaller";

	else
		cout << "Larger";
}