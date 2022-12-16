#include<bits/stdc++.h>
using namespace std;


struct Point
{
	int x;
	string y;

	Point(int a, string b)
	{
		x = a;
		y = b;
	}

	void print()
	{
		cout << x << " " << y << endl;
	}
};

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Point P(06, "Anish Choudhary");
	P.print();
	return 0;

}