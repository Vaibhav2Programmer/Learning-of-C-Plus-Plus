#include<bits/stdc++.h>
using namespace std;

class Player {

public:
	static int count;

	Player() {count++;}
	~Player() {count--;}
};

int Player::count = 0;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	Player p1;
	cout << p1.count << " ";

// We can access an static variable through an classs object but we should access
// it through class name.
	{

		Player p3;
		cout << Player::count << " ";
	}

//	Player p2;
	cout << Player::count ;

}