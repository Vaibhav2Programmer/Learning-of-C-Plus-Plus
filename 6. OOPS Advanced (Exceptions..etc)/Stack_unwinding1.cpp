#include<bits/stdc++.h>
using namespace std;

void f1()
{
	cout << "F1 Begins\n";
	throw 10;
	cout << "F2 Ends\n";
}

void f2()
{
	cout << "F2 Begins\n";
	f1();
	cout << "F1 Begins\n";
}

// f2 end and f1 end are not printed on the screen as f1 and f2 goes out of
// function call stack (FCS) as they did not handle the exception.
// And Stack unwinding says that if a function throws an exception and not
// handle, then control goes to caller and this keeps on going until it finds
// an handler.

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	try
	{
		f2();
	}
	catch (int i)
	{
		cout << "Caught Exception\n";
	}
	cout << "Khatam";

}