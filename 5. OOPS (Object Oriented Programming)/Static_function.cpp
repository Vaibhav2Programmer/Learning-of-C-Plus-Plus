#include <bits/stdc++.h>
using namespace std;

class Player {

private:
	static int count;
public:
	Player() {
		count++;
	}
	~Player() {
		count--;
	}

	static int getCount() {return count;}
};

int Player::count = 0;
// Static Members defined generally outside the class and also accessed through
// Classname. (Recommended Practice)



int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Player p1, p2;
	cout << Player::getCount();

	return 0;
}