#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;
	cin >> x;
	cout << x << endl;
	cout << "Table Of Input No. is : \n";
	for (int i = 1; i <= 10; i++) {
		int table = x * i;
		cout << table << " ";
	}

}



