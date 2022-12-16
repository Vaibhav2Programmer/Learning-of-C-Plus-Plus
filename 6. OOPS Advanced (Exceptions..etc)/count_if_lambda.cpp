#include<bits/stdc++.h>
using namespace std;

// count_if - This function takes two iterators and a functionality/function
// which returns a boolean value and evrn count the times the condition was true
// and return it.

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector <int> v {10, 20, 100, 5, 3};

	int res = count_if(v.begin(), v.end(), [](int x) {return x >= 20;});

	cout << res << " ";

	return 0;


}