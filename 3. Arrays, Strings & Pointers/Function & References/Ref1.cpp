#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// References Basics -

	int x = 13;

	int &y = x; // Assigning reference of x to y it means if we change y x changes
	// and if we change x y changes

	y = y * 10;

	cout << x << "\n";

	x = x / 13;

	cout << y ;
}