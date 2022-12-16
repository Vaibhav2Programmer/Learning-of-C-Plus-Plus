#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, sum, remainder;
    cout << "Enter a No. to find its digital root : \n";
    cin >> n;

    while (n > 0) {

        sum = 0;

        while (n > 0) {
            remainder = n % 10;
            n /= 10;
            sum += remainder;
        }

        if (sum > 9) {
            n = sum;
            sum = 0;
        }
    }
    cout << sum;
    return 0;
}