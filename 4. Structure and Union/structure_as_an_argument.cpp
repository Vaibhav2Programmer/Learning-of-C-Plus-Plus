#include<bits/stdc++.h>
using namespace std;


struct point
{
	int x;
	int y;
};

void print(point p)
{
	cout << "Value Of x = " << p.x << " " << "Value of y = " << p.y;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	point p = {27, 21};
	print(p);
	return 0;
}