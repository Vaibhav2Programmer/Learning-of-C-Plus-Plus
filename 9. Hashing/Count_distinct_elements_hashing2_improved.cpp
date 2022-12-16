#include<bits/stdc++.h>
using namespace std;

// This solution is improved version of previous solution using hashtable where we pass
// begining address of first element and last(end) as the iterator.

int Countdistinct(int arr[], int n)
{
	unordered_set<int> ele(arr, arr + n); // Passing begining and end iterator

	return ele.size();


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

	cout << Countdistinct(arr, n);


	return 0;
}