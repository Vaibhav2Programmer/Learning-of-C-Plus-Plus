#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];

	for (int i = n - 1; i >= 0; i--)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}