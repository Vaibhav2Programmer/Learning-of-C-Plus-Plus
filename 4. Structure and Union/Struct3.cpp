#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	struct student
	{
		string name;
		int roll_no;
		string house;

	};

	student s = {"Rick and Morty", 56, "truth"};

	cout << s.name << " " << s.house << " " << s.roll_no;

	return 0;
}