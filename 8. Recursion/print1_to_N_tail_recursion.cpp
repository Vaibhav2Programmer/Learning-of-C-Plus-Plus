#include<bits/stdc++.h>
using namespace std;

void print1toNtail(int n, int k)
{
	if (n == 0) 		// Base Case - recursion stops.
		return;

	cout << k << " ";
	print1toNtail(n - 1, k + 1);
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k = 1;
	cin >> n;
	print1toNtail(n, k);
	return 0;
}