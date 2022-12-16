#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m = 3, n = 2;

	int arr[m][n] = {{10, 20}, {30, 40}, {50, 60}}; // Here 3 represents rows and 2 represents columns
// for 2-d array and total no. of elements will be - 3*2.

// we can also initialize array as {{10,20},{30,40},{50,60}} {10, 20, 30, 40, 50, 60}

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}

	return 0;

}