#include<bits/stdc++.h>
using namespace std;

int factRecursion(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return n * factRecursion(n - 1);
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << factRecursion(n);
	return 0;
}