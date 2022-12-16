#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {10, 20, 30, 40};

    int *ptr = arr;

    cout << *ptr << " " << ptr << "\n";

    ptr = ptr + 3; // In this case the pointer will move ahead 3 elements/objects and
    // in terms of bytes it will move 12 bytes ahead

    cout << *ptr << " " << ptr << "\n";

    ptr = ptr - 2; // Will move back 2 objects/elements back

    cout << *ptr << " " << ptr << "\n";

}