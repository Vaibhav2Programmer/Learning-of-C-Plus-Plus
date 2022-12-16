#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct Square
	{
		int x;
		int y;
	};

	Square B = {90, 69}; // Created a variable to access the member data's with another method

	cout << B.y << " " << B.x;

	return 0;
}