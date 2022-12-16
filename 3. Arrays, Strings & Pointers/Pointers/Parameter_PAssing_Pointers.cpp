#include<bits/stdc++.h>
using namespace std;

void fun(int *p) {
	*p = *p + 67;
}

void fun1(string *s) {
	*s = *s + "Vaibhav Rajoriya";
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 45;

	fun(&x);

	cout << x;

	string s = "Hello ";

	fun1(&s);
	cout << "\n" << s;

	return 0;
}