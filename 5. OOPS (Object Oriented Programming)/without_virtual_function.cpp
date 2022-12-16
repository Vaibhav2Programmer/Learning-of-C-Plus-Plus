#include <bits/stdc++.h>
using namespace std;

class Base {

public:
	void print() {cout << "Base \n";}
};


class Derived: public Base {
public:
	void print() {cout << "Derived \n";}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Base b;
	b.print();
	Derived d;
	d.print();

	Base *p = &d;
	p -> print();
	return 0;
}