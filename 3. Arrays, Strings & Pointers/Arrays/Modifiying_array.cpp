#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 12, 14, 16};

	for (int i = 0; i < 4; i++)
		arr[i] += 3;

	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";
	return 0;
}