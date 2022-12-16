#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	typedef struct Point  // typedef creates an alias(a second name for that data) which we can use
// in place of this data

	{
		int x;
		string y;
		char z;

	} A;

// here our alias is A which we will use in place of struct Point to refer to it

	A v; // created a variable which will be used to access the member data in Point Structure

	v.x = 10;
	v.y = "Rajoriya";
	v.z = 'B';

	cout << v.x << "\n" << v.y;

	return 0;
}