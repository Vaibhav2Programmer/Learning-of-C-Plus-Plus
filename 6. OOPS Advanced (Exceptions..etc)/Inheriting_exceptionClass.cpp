#include<iostream>
#include<exception>
using namespace std;

class MyException: public exception { // Inheriting Exception cLass which contains all the exceptions.

	virtual const char* what() const throw();
	{
		return "Exception Occured";
	}


};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	try
	{
		throw MyException(); // throwing the exception of MyException class
		// using the object.
	}

	catch (exception &e)
	{
		cout << e.what();
	}

}

// Here we are overriding the virtual what function which is present in the
// exception class. Also we can create an base class reference which refers
// to derived class object and when we call/override this virtual function
// with base class reference it calls derived class functions.

// Thats how virtual functions work when we override with what().
// With use of this, we can catch all the exception with just writing exception class.