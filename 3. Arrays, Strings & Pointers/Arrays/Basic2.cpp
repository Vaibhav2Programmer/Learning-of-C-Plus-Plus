#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] {10, 20, 30, 50};

	for (int x : arr)
		cout << x << " ";

	int array_size = sizeof(arr);
	int element_no = sizeof(arr) / sizeof(arr[0]);


	cout << "\n" << array_size << " " << element_no;
}