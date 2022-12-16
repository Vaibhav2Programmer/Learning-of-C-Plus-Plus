#include<bits/stdc++.h>
using namespace std;

struct Point   // Point is the name of the structure
{
	int x;		// x and y are the member's data
	string y;
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct Point P; // Created a variable of the structure named P which we will use
// to acess the members of the structure using this variable P.

// To write struct in c++ is optional, we can simply  write Point P it will stoll compile.

	P.x = 40;
	P.y = "vaibhav";

	cout << P.x << " " << P.y;

	return 0;
}