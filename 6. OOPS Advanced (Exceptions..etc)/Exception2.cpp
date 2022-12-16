#include<bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	double x, y;
	cin >> x >> y;

	try
	{
		if (x == 0.0)
			throw 0; // It has a datatype of integer type.
		if (y == 0.0)
			throw string("Y Value is Zero");
		if (x + y < 0.0)
			throw (x + y);

	}

	catch (int x) // Catch Block will catch the integer type exception.
	{

		cout << "Value of x is " << x;
	}

	catch (string &s) // Will catch the string type exception.
	{
		cout << s;
	}

	catch (...) // catch all block - will catch exception for which catch block
		// is not written.
	{
		cout << "x+y is Less than Zero";
	}

	cout << "Bye...";
	return 0;
}