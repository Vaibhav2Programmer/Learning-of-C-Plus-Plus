#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 10;

	// & symbol is used to know the adddress of the variables - also known as address operator

	cout << &x << "\n";

	cout << *(&x);

	// * Operator is opposite of & Operator, if we put * before any variable address
	// it will give value at that variables address.

	x = x + 20;

	cout << "\n" << &x << endl;

	cout << &(*(&x));

	int y = 21;

	cout << " " << &y;
}