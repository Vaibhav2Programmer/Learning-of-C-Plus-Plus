#include<bits/stdc++.h>
using namespace std;


int swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x, y;
	cin >> x >> y;

	swap(x, y);

	cout << x << " " << y;

}