#include<bits/stdc++.h>
using namespace std;

// Operator Overloading - we can use operators for our own defined classes/datatypes.
// We can do this in 2 Way - either using it as a member function or
// as a global function.

class Complex {

private:
	int r, i;

public:
	Complex(int r = 0, int i = 0) {
		this->r = r;
		this->i = i;
	}

	//Operator Function

	Complex operator +(const Complex &obj)
	{
		Complex res;
		res.r = this->r + obj.r;
		res.i = this->i + obj.i;
		return res;
	}

	void print() {cout << r << " + i" << i;}
};

int main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2;
	c3.print();
	return 0;


}