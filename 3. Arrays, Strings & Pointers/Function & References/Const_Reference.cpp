#include<bits/stdc++.h>
using namespace std;

void fun(const string &s) {
	cout << s;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	const int &y = 10;
	cout << y << "\n";

	fun("Hello World"); // if u need to pass the input directly and modify we need to use the
	// const Value Reference

	return 0;

}