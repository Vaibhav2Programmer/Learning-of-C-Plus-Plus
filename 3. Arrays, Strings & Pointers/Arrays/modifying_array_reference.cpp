#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {10, 12, 14, 16};

	for (int &x : arr)
		x += 10;
	for (int x : arr)
		cout << x << " ";
	return 0;
}