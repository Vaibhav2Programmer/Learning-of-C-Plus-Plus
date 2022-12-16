#include<bits/stdc++.h>
using namespace std;

int main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;


	if (n >= 5)
		cout << "Yes";

	else if (n <= 5)
		cout << "NO";

	return 0;
}