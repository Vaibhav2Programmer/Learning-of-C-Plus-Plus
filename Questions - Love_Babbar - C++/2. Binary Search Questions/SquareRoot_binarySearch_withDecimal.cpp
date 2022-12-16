#include<bits/stdc++.h>
using namespace std;


// If we do this without using binary it wioll become a binary Search.
// And we are using long long int to avoid overflow or integer out of bound
//


long long int squareRoot(long long int n)
{

	int ans = 0, s = 0, e = n;
	long long int mid = s + (e - s) / 2;

	while (s <= e)
	{

		long long int square = mid * mid;

		if (square == n)
		{
			ans = mid;
		}

		if (square > n)
		{
			e = mid - 1;
		}

		else
		{
			ans = mid;
			s = mid + 1;
		}

		mid = s + (e - s) / 2;
	}

	return ans;

}

double morePrecision(int n, int precision, int tempSol)
{
	double factor  = 1;
	double ans = tempSol;

// This loop is for the precision factor 1/10 and then again 0.1/10....and so on.
	for (int i = 0; i < precision; i++)
	{
		factor = factor / 10;

		for (double j = ans; j * j < n; j = j + factor)
		{
			ans = j;
		}
	}

	return ans;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	cin >> n;
	int tempSol = squareRoot(n);


	cout << "Answer is " << morePrecision(n, 2, tempSol);
	return 0;

}