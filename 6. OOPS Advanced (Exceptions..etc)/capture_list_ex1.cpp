#include<bits/stdc++.h>
using namespace std;

// In capture list we can pass different arguments to get local
// variables captured according to us.
// [=] = will capture by value only i.e. read only copies.
// [&] = will capture it by references.
// [] = nothing will be captured.
// static and global variables are always captured. even if we dont pass anything.

int z = 29; // Global Variable

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 10, y = 15;

	auto var1 = [&](int a) { // Here, x and y will captured by reference.

		x = x + a;
		y = y + a;
		z = z + a;
	};

	var1(21);
	cout << x << " " << y << " " << z;
	return 0;



}
