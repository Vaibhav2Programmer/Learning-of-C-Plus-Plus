#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char choice;
    int x = 0, y = 0;

    cin >> choice;

    switch (choice) {

    case'L': x--;
        break;
    case'R': x++;
        break;
    case'U': y++;
        break;
    case'D': y--;
        break;
    }
    cout << x << " " << y;

    return 0;
}