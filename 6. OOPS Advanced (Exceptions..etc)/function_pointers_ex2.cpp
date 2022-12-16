#include<iostream>
using namespace std;

int product(int x, int y)
{
	return x * y;

}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	auto ptr2 = product;
	cout << ptr2(10, 9);
	return 0;

// Another way of writing
	/*

		int (*ptr2)(int, int) = product; or &product
		cout << *ptr2();


	*/
}