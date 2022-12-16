#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {10, 20, 30, 40};

    int *ptr = arr; // arr holds the address of the first element

    cout << *ptr << " " << ptr << "\n";

    ptr++; // it will move 4 bytes forward/ahead depending on the pointer type as
    // here pointer type is integer

    cout << *ptr << " " << ptr << "\n";

    ptr++;

    cout << *ptr << " " << ptr << "\n";

    ptr++;

    cout << *ptr << " " << ptr << "\n";

    ptr--; // Will move 4 bytes back as pointer type is int if pointer type was double
    // it would have moved 8 bytes back

    cout << *ptr << " " << ptr << "\n";

    ptr--;

    cout << *ptr << " " << ptr;
}