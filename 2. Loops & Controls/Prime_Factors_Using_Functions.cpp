#include <bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}


void prime_factors(int n)
{
	int x;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i))
		{
			x = i;
			while (n % x == 0)
			{
				cout << i << " ";
				x = x * i;
			}
		}
	}
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	prime_factors(n);
	return 0;
}