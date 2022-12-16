#include<bits/stdc++.h>
using namespace std;

// Making an class without the smart pointer.
// As we can see in the output destructor is not Called.

class Test {
public:
	int x, y;
	Test(int a = 0, int b = 0)
	{
		x = a;
		y = b;
		cout << "Constructor Called \n";
	}

	~Test()
	{
		cout << "Destructor Called \n";
	}

};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << "Main Begins \n";
	{
		Test *p = new Test(10, 20);
	}
	cout << "Main Ends \n";

	return 0;
}