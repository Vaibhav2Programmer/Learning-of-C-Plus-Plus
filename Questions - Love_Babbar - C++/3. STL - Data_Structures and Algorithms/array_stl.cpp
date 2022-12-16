#include<iostream>
#include<array>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Create a array using an array keyword and passing datatype and size of the array.

	array<int, 4> a = {1, 2, 3, 4};

	for (int i : a)
		cout << i << " ";
	cout << endl;

	// Also allows to directly fetch the elements using the at() operation/function

	cout << a.at(3) << "\n";
	cout << a.at(0) << "\n";

	// To print first element
	cout << a.front() << "\n";
	// To print last element
	cout << a.back();

	return 0;
}