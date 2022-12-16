#include<bits/stdc++.h>
using namespace std;

// Weak Pointer - weak pointer is a temporary pointer which is used for shared Pointer Objects.
// We use weak pointer for those shared_pointer Objects for which we dont want ownership or
// increase the reference Count of it.


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

	weak_ptr <Test> p1; // Created a weak pointer p1
	{
		shared_ptr <Test> p2 = make_shared <Test>(25);
		p1 = p2; // even though we assigned to a weak pointer destructor will be
// called as weak pointer does not increase the count.
		cout << p1.use_count() << endl;
	}

	cout << "Main Ends \n";
	cout << p1.expired();

// expired function checks whether the object the weak pointer was pointing to is
// deleted or not.
// True(1) - deleted and false(0)
	return 0;



	return 0;
}