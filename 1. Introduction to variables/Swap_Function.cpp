#include<bits/stdc++.h>
using namespace std;
int a, b;

void number_swap(int a, int b) {

	int temp = a;
	a = b;
	b = temp;
	cout << a << " " << b << "\n";

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 10, y = 21;

	number_swap(x, y);

	cout << x << " " << y;

	return 0;


}