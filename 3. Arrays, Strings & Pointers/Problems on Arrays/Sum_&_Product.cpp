#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, even_sum = 0, odd_product = 1;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even_sum += arr[i];
		else
			odd_product *= arr[i];
	}

	cout << "Sum of even Numbers: " << even_sum << "\n";
	cout << "Product of odd numbers: " << odd_product;
	return 0;
}
