#include<bits/stdc++.h>
using namespace std;

// Condition is that it is a sorted array but it may contain duplicate values.

int lastOccurence(int a[], int n, int key)
{
	int s = 0;
	int e = n - 1, ans = -1;
	int mid = s + (e - s) / 2;


	while (s <= e)
	{

		if (a[mid] == key)
		{
			ans = mid;
			s = mid + 1;
		}

		else if (key > a[mid]) // right waale part mein dekhege
		{
			s = mid + 1;
		}

		else if (key < a[mid])
		{
			e = mid - 1;
		}

		mid = s + (e - s) / 2;
	}

	return ans;
}

// Similarly we can also find out the Last Occurence of the element like the
// first Occurence function.

int firstOccurence(int a[], int n, int key)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s) / 2;
	int ans = -1;

	while (s <= e)
	{
		if (a[mid] == key)
		{
			ans = mid;
			e = mid - 1;
		}

		else if (key > a[mid]) // Right mein jaaao
		{
			s = mid + 1;
		}

		else if (key < a[mid]) // Left mein jaao
		{
			e = mid - 1;
		}

		mid = s + (e - s) / 2;
	}

	return ans;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int even[6] = {4, 2, 1, 4, 8, 9};
	int no_of_occurences = 0, firstOccur, lastOccur;

	cout << "First Occurence of 4 is " << firstOccurence(even, 6, 4) << endl;
	cout << "Last Occurence Of 4 is " << lastOccurence(even, 6, 4);

	firstOccur = firstOccurence(even, 6, 4);
	lastOccur = lastOccurence(even, 6, 4);

	cout << endl << (lastOccur - firstOccur) + 1;
	return 0;

}