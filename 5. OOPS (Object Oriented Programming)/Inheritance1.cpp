#include<bits/stdc++.h>
using namespace std;

class Base {

protected:
	int x;
public:
	Base(int x): x(x) {// Here we can also use this pointer instead of initializer
//	list where data member and constructor parameter name is same.
// this->x=x;


		{
			cout << "Base \n";
		}
	}
};

class Derived: public Base {

private:
	int y;
public:
	Derived(int x, int y): Base(x), y(y)
	{
		cout << "Derived \n";
	}

	void print()
	{
		cout << x << " " << y << "\n";
	}
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Derived d(1, 21);
	d.print();

	return 0;
}