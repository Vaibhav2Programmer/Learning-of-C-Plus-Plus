#include<bits/stdc++.h>
using namespace std;

// Making an Smart Pointer Class

class SP
{
	int *ptr;      // wraps an integer pointer.
public:
	SP(int *p = NULL) {ptr = p;} // If we pass an argument it will initialized by p
// otherwise it will initialized by NULL.
	~SP() {delete ptr;} // deallocate the memory.

	int &operator *() {return *ptr;} // returning the derefernce value. by overloading the * operator.
};

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	SP s(new int()); // allocating the memory
	*s = 20;
	cout << *s;
	return 0;

}