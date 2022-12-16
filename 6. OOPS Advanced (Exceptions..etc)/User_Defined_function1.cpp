#include<bits/stdc++.h>
using namespace std;

// We throw exception we can throw of any datatype but we should throw user
// defined datatype.

class ArraySizeZeroException {};
class ArraySizeNegativeException {};

float average(int arr[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	return sum / n;
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int *arr = new int[n]; //Creating an array of size n.
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	try
	{
		float res = average(arr, n);
		cout << res;

	}
	catch (ArraySizeZeroException &e1)
	{cout << "Array Size is Zero";}
	catch (ArraySizeNegativeException &e2)
	{cout << "Array Size is Negative";}
}