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
		shared_ptr <Test> p2 = make_shared <Test>(21); // Constructor is Called.
		p1 = p2; // Refering to same value 21 of type Test.
// Here Destructor will not be called after this scope ends as there is still one
// pointer refering to it and it goes away when main func. is over.
	}

	cout << "Main Ends \n";

	return 0;
}