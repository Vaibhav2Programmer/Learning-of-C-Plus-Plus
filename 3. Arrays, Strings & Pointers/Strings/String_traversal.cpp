#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string str1 = "GeeksForGeeks";

// first Method to traverse through string

	for (int i = 0; i < str1.length(); i++)
		cout << str1[i] ;

	cout <<  "\n";

// Second Method for traversing through the string

	for (char x : str1)
		cout << x;
}