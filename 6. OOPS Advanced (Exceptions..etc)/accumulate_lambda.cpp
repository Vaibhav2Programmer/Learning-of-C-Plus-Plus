#include<bits/stdc++.h>
using namespace std;

// accumulate() - This funtion by default return the sum.
// but we can also use to provide other functionality.

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector <int> v {10, 20, 5, 6, 7};

	int res = accumulate(v.begin(), v.end(), 0); //0 is initialized Value.

//	int pro = accumulate(v.begin(), v.end(), 1, [] (int x, int i) {return x * i;});
// generally we write as written above with 1 as initialized value.

	float pro = accumulate(v.begin(), v.end(), 0.5, [] (float x, float i) {return x * i;});

	cout << res << "\n" << pro;


	return 0;

}