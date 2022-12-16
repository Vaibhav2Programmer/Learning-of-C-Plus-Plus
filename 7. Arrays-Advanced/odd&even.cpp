#include<bits/stdc++.h>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int num;
	cin >> num;

	int rem, digits;

	/*	while (num > 0)
		{
			rem = num % 10;
			num = num / 10;
			digits++;
		}
	*/

	int arr[1000000], i = 0, even_sum = 0, odd_sum = 0;

	while (num > 0)
	{
		arr[i] = num % 10;
		num = num / 10;
		i++;
		digits++;
	}

	for (int j = 0; j < digits; j++)
	{
		if (arr[j] % 2 == 0)
		{
			even_sum += arr[i];
		}
		else
			odd_sum += arr[i];
	}

	if (even_sum > odd_sum)
		cout << even_sum;
	else
		cout << odd_sum;



	return 0;
}