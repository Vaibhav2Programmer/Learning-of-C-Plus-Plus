#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int yr;
	cin >> yr;

	if ((yr % 4 == 0 and yr % 100 != 0) or (yr % 400 == 0))
		cout << "Leap year";
	else
		cout << "Not Leap Year";
}