#include <bits/stdc++.h>
using namespace std;

class A {
public:
	int x = 10;

};

class B: virtual public A {
public:
//	int x = 12;
};

class C: virtual public A {
public:
//	int x = 55;
};

class D: public B, public C {
public:
//	int x = 91;
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	D obj;
	cout << obj.x;
	return 0;
}