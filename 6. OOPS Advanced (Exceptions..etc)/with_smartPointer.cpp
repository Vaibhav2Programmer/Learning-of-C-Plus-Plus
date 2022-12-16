#include<bits/stdc++.h>
using namespace std;

// Allocating memory (dynamically) with smart pointer which will also deallocate
// the memory.

// Class is a user defined datatype.

class Test {
public:
	int x, y;
	Test(int a = 0, int b = 0) // Constructor
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

class smartPointer { // Smart Pointer Class

	Test *ptr; //Wraps a Test type Pointer inside it
public:
	smartPointer(Test *p = NULL) {ptr = p;}
// Takes a pointer of Test size & initialize it with ptr as p and if no argument
// then initialize with default i.e. Null.

	~smartPointer() {delete ptr;}

	Test &operator *() {return *ptr;}
// Overloading the *(derefernce operator to get the value at that address.)

};


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << "Mains Begins \n";
	{
		smartPointer P(new Test(11, 101));
// Here Destructor will also be called after object goes out of scope and dealloactes the memory.
	}
	cout << "Main Ends \n";


	return 0;
}