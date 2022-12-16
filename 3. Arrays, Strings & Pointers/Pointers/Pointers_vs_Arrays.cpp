#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {10, 20, 30};

    int *ptr = arr; // Here arr first element address is assigned to ptr pointer variable

    cout << sizeof(arr) << "\n"

         << sizeof(ptr) << "\n"

         << arr[2] << "\n"  // Internally compiler treats arr[i] as *(arr + i)

         << *(ptr + 2) ;
}