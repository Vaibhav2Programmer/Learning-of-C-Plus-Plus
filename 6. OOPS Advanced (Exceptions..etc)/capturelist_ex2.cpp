#include<bits/stdc++.h>
using namespace std;

// [=] - Capture By value

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 5, y = 10; // Local Variables to the main function.

	auto my_var = [ = ]()mutable { // When we pass evrything by value it will give error
// as it will only give read only copies of x and y. Therefore, it is necessary
// to write mutable.

		x = x + 7;
		y = y + 7;
		cout << x << " " << y << endl;
	};

	my_var();

	cout << x << " " << y;
	return 0;

}