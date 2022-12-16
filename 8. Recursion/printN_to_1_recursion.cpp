#include<bits/stdc++.h>
using namespace std;

// We are going to print N to 1 values using recursion.
// Also,This is a tail recursive function as all statements are executed
// before the recursive call.

// Simply the tail recursive call is when in function last thing to execute is
// only recursive call.

void printNto1(int n)
{
	if (n == 0)  // Base Case
		return;

	cout << n << " ";
	printNto1(n - 1);
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	printNto1(n);

	return 0;
}