#include<bits/stdc++.h>
using namespace std;

int factTailRecursion(int n, int k)
{
	if (n == 0 || n == 1)
		return k;

//	cout << k ;

	factTailRecursion(n - 1, k * n);
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k = 1;
	cin >> n;
	cout << factTailRecursion(n, k);
	return 0;
}