#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x = 24;

	int *p ; // Created a Pointer variable using (*) Operator which will Store the
	// Memory Address

	p = &x; // Using (&) Operator we will store the address of the x variable in the
	// Pointer Variable p as (&) Operator returns the address of the Variable.

	cout << x << endl;

	cout << *p << endl;	// Value at the address(of x) stored by the p (pointer variable)

	cout << p << endl; // Address of x stored by Pointer p

	cout << &p ; // Address of p variable which is stored in memory
}