#include<iostream>
#include<deque>
using namespace std;

// Deque is implemented with use of multiple fixed static arrays also known as doubly ended queue.
// In deque, we can delete/insert from both the ends from front also and back also.

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	deque<int> d; // Creating a deque

	d.push_back(9); // adds element from the last
	d.push_front(1);
	d.push_front(2); // adds element from the front.
	d.push_back(8);

	// In the same way we can delete also using pop_back() {which deletes last element}
	// and pop_front() {from the front}.

	for (int i : d)
	{
		cout << i << " ";
	}

	cout << endl;

	// To check whether deque is empty or not.

	cout << d.empty() << "\n";

	// To delete elements we use erase() function with begin() operator and also end() operator.

	d.erase(d.begin(), d.begin() + 2); // 2 elements from first will get deleted.

	for (int i : d)
	{
		cout << i << " ";
	}

	cout << endl;

	d.erase(d.end(), d.end() + 2);

	for (int i : d)
	{
		cout << i << " ";
	}

	cout << d.empty();

	cout << "\n";

	d.push_front(2);
	d.push_back(4);

	d.erase(d.begin()); // First element gets deleted.

	for (int i : d)
	{
		cout << i << " ";
	}

	d.erase(d.begin());

	for (int i : d)
	{
		cout << i << " ";
	}

	cout << d.empty();

	return 0;
}

// Imp Note - Whether u write d.erase(d.begin()) or d.erase(d.begin() + 1)
// only first element gets deleted.

// if u write d.erase(d.begin(), d.begin() + 2) here, 2 elements gets deleted
// starting from the begining.