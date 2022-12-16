#include<bits/stdc++.h>
using namespace std;

void missingElements(int arr[], int n)
{
	sort(arr, arr + n); // Sorting the array

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	int repeating = -1, missing = -1, count = 1;

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] == arr[i])
		{
			repeating = arr[i];
		}

	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] != count)
		{

			missing = arr[i] - 1;
			break;

		}


		count++;
	}
	cout << "Missing Element " << missing << "\n";
	cout << "Repeating Element " << repeating;
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

	missingElements(arr, n);

	return 0;
}