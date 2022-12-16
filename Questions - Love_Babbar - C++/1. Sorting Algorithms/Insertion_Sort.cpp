#include<bits/stdc++.h>
using namespace std;

/* Insertion Sort mein hum swap nhi karte hum adjacent elements se compare karke
elements ko shift karte hai and replace karte hai.
*/

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		// for round 1 to n-1
		int temp  = arr[i];
		int j = i - 1;

		for (; j >= 0; j--)
		{
			if (arr[j] > temp) {

				// shift kardege
				arr[j + 1] = arr[j];
			}
			else
			{	// sort hai wo element
				break;
			}
		}
		arr[j + 1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int ex[6] = {8, 22, 7, 9, 31, 5};
	insertionSort(ex, 6);

	return 0;
}