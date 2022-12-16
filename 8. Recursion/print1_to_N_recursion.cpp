#include<bits/stdc++.h>
using namespace std;

// We have to print 1 to N values using recursion.

void print1toN(int n)
{
	if (n == 0)    // Base Case
		return;

	print1toN(n - 1);
	cout << n << " ";
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	print1toN(n);

	return 0;
}