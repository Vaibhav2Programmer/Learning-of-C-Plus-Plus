#include<iostream>
#include<list>
using namespace std;

// STL List has been implemented by doubly linked list.
// In doubly linked list, we have 2 pointers one pointing at the front and other at th end.

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// In list we can also use operations/ functions same as in deque.

	list<int> n(5, 100); // will have list of size 5 with every element as 100.

	for (int i : n)
	{
		cout << i << " ";
	}

	cout << endl;

// We can also insert and delete elements from front also and back also.

	n.push_back(12);
	n.push_front(11);
	n.push_back(13);
	n.push_front(10);

	for (int i : n)
	{
		cout << i << " ";
	}

	cout << endl;

	n.pop_back();
	n.pop_front();

	for (int i : n)
	{
		cout << i << " ";
	}

// Can also use erase() function.

	n.erase(n.begin()); // First element gets deleted.

	cout << "\n";

	for (int i : n)
	{
		cout << i << " ";
	}


	return 0;
}