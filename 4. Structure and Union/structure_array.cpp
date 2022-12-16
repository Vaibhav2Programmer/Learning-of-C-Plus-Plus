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
		int y;
	};

	point arr[5];

	for (int i = 0; i < 5; i++)
	{
		arr[i].x = i;
		arr[i].y  = i * 10;
	}

	for (int i = 0; i < 5; i++)
		cout << arr[i].x << " " << arr[i].y << endl;

	return 0;
}