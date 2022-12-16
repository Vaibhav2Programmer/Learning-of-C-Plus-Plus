#include<bits/stdc++.h>
using namespace std;

// Shared Pointer - Shared Pointer allows multiple pointers to share a common object.
// It allows co-ownership.

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

// ways to create a shared Pointer

	shared_ptr <Test> shr1 = make_shared <Test> (10); // assgining the value 10 to p1

// 	Shared-ptr <Test> p1 (new Test(10));

	shared_ptr <Test> shr2 = shr1; // Sharing the ownership

	cout << shr1.use_count() << endl;
	cout << shr2.use_count() << endl;

	return 0;
}