#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y, z;
	cin >> x >> y >> z;

	if (x < y and y < z)
	{
		cout << "Largest " << z;
	}
	else if (x > y and y > z)
	{
		cout << "Largest " << x;
	}
	else
		cout << "Largest " << y;

	return 0;


}