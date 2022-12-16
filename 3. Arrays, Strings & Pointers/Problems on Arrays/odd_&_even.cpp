#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, odd = 0, even = 0;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			even++;
		else
			odd++;
	}

	cout << "No. of odd elements in Array:" << odd << "\n";
	cout << "No. of even elements in Array:" << even << "\n";

	return 0;
}