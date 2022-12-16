#include<bits/stdc++.h>
using namespace std;

int average(int arr[], int n) throw (string)

// This can also be written as int average(int arr[], int n)
// throw (string) in the function name is optional.

{
	if (n == 0)
		throw string("Array Size is Zero,Cannnot be Processed\n");
	int sum = 0;
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

	int arr[] = {4, 5, 2};
	int n = 0;

	try // We write that code in try block which may throw an exception.
	{
		int res = average(arr, n);
		cout << res;

	}

	catch (string &s) // Catch Block catches the exception according to the datatype
	{
		cout << s;
	}

	cout << "Done";
	return 0;

}