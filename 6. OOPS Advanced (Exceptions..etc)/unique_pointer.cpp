#include<bits/stdc++.h>
using namespace std;

// In unique pointer we can only point to one object, that's why its unique
// and we should not assign one unique pointer to another.

class Test {
	int x = 20, y;
public:
	Test() {cout << "Constructor Called \n";}
	Test(int y) {this->y = y; }
	~Test() {cout << "Destructor Called \n";}

	fun() {cout << x << " " << y << endl;}
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << "Main Begins \n";

// two ways to make a unique pointer

// 1. unique_ptr <Test> uni = make_unique<Test>(77);

	unique_ptr <Test> un(new Test());

	unique_ptr <Test> y_value(new Test(15));

//	un -> fun();
	y_value -> fun();

// Now if we want to change the ownership of 15 as y_value is pointing to it
// we can use move function.

	unique_ptr <Test> val2 = move(y_value);



	return 0;
}