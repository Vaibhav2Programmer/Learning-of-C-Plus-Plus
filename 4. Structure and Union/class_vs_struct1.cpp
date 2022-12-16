#include <bits/stdc++.h>
using namespace std;

class Point
{
public:
	int x;
	string y;
};

// Since Here we used class instead of struct and in class data members are private
// by default so we need to make them public using (public:)

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Point A;
	A.x = 06;
	A.y = "Anish Choudhary";

	cout << A.x << " " << A.y;
}