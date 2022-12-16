#include<bits/stdc++.h>
using namespace std;

// find_if() - This function takes iterators and functionality which returns a
// boolean value and it returns that first element address that satisfies the
// Condition.

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v {1, 25, 9, 12, 15};

	auto op = find_if(v.begin(), v.end(), [] (int i) {return i >= 15;});

// op will have the address of element that satisfies the condition and we
// print it using dereference operator.

	cout << *op;

	return 0;
}