#include<bits/stdc++.h>
using namespace std;

// for_each() - takes container as a input, also takes first iterator and last as parameters.


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector <int> v {10, 20, 30, 40};

	for_each(v.begin(), v.end(), [](int &x) {return x = x * 2;});

	for_each(v.begin(), v.end(), [] (int x) {cout << x << " ";});

	for (auto i : v) // Another method to print the elements.
		cout << " " << i;

	return 0;
}