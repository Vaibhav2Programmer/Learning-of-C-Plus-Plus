#include<bits/stdc++.h>
using namespace std;

int &fun() {

	static int x = 21;

	return x;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int &z =  fun();

	cout << fun() << "\n";

	z = 30;

	cout << fun() << "\n";

	int  x = x - 12;
	cout << z;

	return 0;
}