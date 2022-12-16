#include<bits/stdc++.h>
using namespace std;

// With use of lock() function we can upgrade a weak pointer to a shared Pointer.

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

	weak_ptr <Test> p1;
	{
		shared_ptr <Test> p2 = make_shared <Test> (91); // onstructor called here only
		p1 = p2;

		// Using lock function to upgrade it.

		cout << p2.use_count() << endl;
		shared_ptr <Test> p3 = p1.lock() ; // Converting
		cout << p2.use_count() << endl; // returns value 2 as p1 also is a shared Pointer

	}

	cout << p1.expired() << endl;
	cout << p1.use_count() << endl;
	cout << "Main Ends \n";
	return 0;
}