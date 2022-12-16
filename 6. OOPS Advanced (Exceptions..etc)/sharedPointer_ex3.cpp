#include<bits/stdc++.h>
using namespace std;

class Test {

	int x;
public:
	Test(int a = 0) {cout << "Constructor \n";}
	~Test() {cout << "Destructor \n";}

	fun() {cout << x << endl;}
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	shared_ptr <Test> p1; // Here Constructor will not be called as object is only declared.
	{
		shared_ptr <Test> p2 = make_shared<Test>(2213); // Constructor is Called.

// Here destructor will be called after this scope as refer count to value 2213
// of Test Type is only one and it will be deallocated after this scope.
	}
	cout << "Main Ends";
	return 0;
}