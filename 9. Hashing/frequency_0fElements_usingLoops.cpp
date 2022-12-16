#include<bits/stdc++.h>
using namespace std;

void frequencyOfElements(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		bool flag = false;

		for (int j = 0; j < i; j++) // Checking if duplicates are present on left hand side
		{
			if (arr[i] == arr[j])
			{	flag = true;
				break;
			}
		}

		if (flag == true)
			continue; // moves to the next iteration

		int freq = 1;

		for (int j = i + 1; j < n; j++) // Counting the frequency on the right side of the element
		{
			if (arr[i] == arr[j])
				freq++;
		}

		cout << arr[i] << " " << freq << endl;
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	frequencyOfElements(arr, n);

	return 0;
}