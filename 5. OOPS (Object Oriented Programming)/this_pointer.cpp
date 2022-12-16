#include<bits/stdc++.h>
using namespace std;

class Point {

	int x, y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	void Print()
	{
		cout << "Value Of X is = " << x << endl;
		cout << "Value Of Y is = " << y ;
	}

};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Point a(10, 21);
	a.Print();

	return 0;

}