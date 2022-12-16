#include <iostream>
using namespace std;

// In this program we are counting the frequency of entered elements

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, freq = 0, element;
	cin >> n;
	cin >> element;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
			freq++;
	}

	cout << "Freq.of entered " << element << " is:" << freq;
}