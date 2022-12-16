#include<bits/stdc++.h>
using namespace std;

// When we will declare any variable static it will be captured automatically.

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int static x = 22, y = 44;

	auto lamb_exp = [](int a) {

		x = x * a;
		y = y * a;
		cout << x << " " << y << endl;
	};

	lamb_exp(5);
	cout << x << " " << y;
	return 0;

}