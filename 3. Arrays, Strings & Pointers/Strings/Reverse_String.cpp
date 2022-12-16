#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str = "geeks";

	for (int i = str.length() - 1; i >= 0; i--)
		cout << str[i];
}