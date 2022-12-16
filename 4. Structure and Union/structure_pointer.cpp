#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct point
	{
		int x;
		string y;
	};

	point p = {6, "Bhau"};

	point *ptr = &p;

	cout << ptr -> x << endl;

	ptr -> x = 9;

	cout << p.x;

	return 0;
}