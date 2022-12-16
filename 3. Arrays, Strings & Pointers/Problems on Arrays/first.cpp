#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int first_array[n];

	for (int i = 0; i < n; i++)
	{
		cin >> first_array[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Elements of First Array [" << i << "]" << "= " << first_array[i];
	}

	return 0;
}