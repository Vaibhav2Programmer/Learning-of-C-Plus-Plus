#include <iostream>
using namespace std;

int x; // Global Variable
int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x; // Local Variable

	cout << x;
	return 0;

}

// Global Variable Have default Values but Like for int it has Zero, but not
// initializing local variable and printing output will generate random
// output depending on the