#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 29;

	int *ptr = &x;

	cout << *ptr << "\n";

	x += 30;

	cout << *ptr << "\n";

	*ptr = *ptr -  19;

	cout << *ptr;
}