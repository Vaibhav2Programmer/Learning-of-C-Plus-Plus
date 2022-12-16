#include<iostream>
using namespace std;

void fun(string &&s) {
	s += " Hello";
	cout << s;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	fun("User"); // if u need to pass the input directly and modify we need to use the
	// R Value Reference

	// cout << "\n" << s;
	return 0;
}