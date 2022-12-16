#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Subtraction Of Pointers

    int arr[] = {10, 20, 30, 40};

    int *ptr1 = arr;

    cout << *ptr1 << " " << ptr1 << "\n";

    int *ptr2 = ptr1 + 3; // Initializing ptr2 pointer by moving the 3 bytes ahead

    cout << *ptr2 << " " << ptr2 << "\n";

    cout << (ptr2 - ptr1); // When we subtract the pointers it would give back the

    // the integer value as it returns objects between them.
}