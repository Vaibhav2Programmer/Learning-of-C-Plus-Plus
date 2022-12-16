#include<iostream>
#include<vector>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v; // Created an vector v with datatype int

	cout << v.capacity() << "\n" ; // Tells how much memory is allocated to the vector

	// using the push_back method

	v.push_back(3);
	v.push_back(2);
	v.push_back(7);
	v.push_back(5);

	for (int i : v)
		cout << i << " ";
	cout << endl;

	// Can also use all the properties used in array like at(), front(), back() etc.

	cout << v.size() << "\n"; // tells how many elements are there
	cout << v.at(2) << "\n";

	// can also delete elements using pop_back

	v.pop_back(); // 5 last element gets deleted.

	for (int i : v)
	{
		cout << i << " ";
	}

	cout << endl;

//	v.clear(); // deletes all element in the vector

//	cout << "\n" <<  v.size();

	// we can also use begin() and end() iterator pointing to the respective positions in the vector.

	vector<int> a(5, 1); // Initializing the vector, here size is 5 and initializing all
	// 5 elements with 1.

	for (int x : a)
		cout << x << " ";

	return 0;
}