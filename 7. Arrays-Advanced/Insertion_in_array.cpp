#include<bits/stdc++.h>
using namespace std;

// Insertion in an array only happens when there is left space in an array.
/*
int insertElement(int arr[], int n, int position, int size, int element)
{


	return size;
}*/

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, size, position, element;

	cin >> n;
	cin >> size;

	int a[n];

	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}

	cin >> position >> element;

//	cout <<  insertElement(a, n, position, size, element);

	/*	for (int i = 0; i < ans; i++)
		{
			cout << a[i] << " ";
		}
	*/

	if (size >= n)
	{
		for (int i = 0; i < size; i++)
			cout << a[i] << " ";
	}

	else
	{
		for (int i = n - 1; i >= position - 1; i--)
		{
			a[i + 1] = a[i]; // Shifting of the Elements.
		}

		a[position - 1] = element;
		size++;
	}

	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}