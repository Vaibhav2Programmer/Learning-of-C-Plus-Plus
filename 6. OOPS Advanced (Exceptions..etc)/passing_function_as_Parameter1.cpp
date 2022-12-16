#include<bits/stdc++.h>
using namespace std;

int add(int x, int y) {return x + y;}
int product(int x, int y) {return x * y;}

// Passing function as Parameter providing functionality
// It will call the suitable function according to the address(of the function)
// Passed by the user.

int compute(int x, int y, int (*fun_ptr) (int, int))
{
	return fun_ptr(x, y);
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << compute(10, 11, add) << endl;
	cout << compute(12, 13, product);
	return 0;

}