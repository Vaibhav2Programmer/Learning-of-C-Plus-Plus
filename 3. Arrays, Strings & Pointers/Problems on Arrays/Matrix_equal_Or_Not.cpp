#include <iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[3][3], b[3][3], i, j, flag = 1;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> a[i][j];


	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> b[i][j];


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] != b[i][j])
			{
				flag = 0;
			}
		}
	}

	if (flag == 1)
		cout << "Matrices are Equal";
	else
		cout << "Matrices are Not Equal";
}