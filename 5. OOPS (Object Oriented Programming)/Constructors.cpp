#include<bits/stdc++.h>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
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

	Point a;
	Point a1(100, 210);
	a.print();
	a1.print();

	Point *ptr = new Point();
	Point *ptr1 = new Point(12, 2121);

	ptr->print();
	ptr1->print();

	return 0;

// Here, Point is a datatype/class and a is a variable/object of that class.
}