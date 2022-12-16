#include <typeinfo>
#include <iostream>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	auto x =  15.5;
	auto y = true;
	cout << typeid(x).name() << "\n" << typeid(y).name();
}