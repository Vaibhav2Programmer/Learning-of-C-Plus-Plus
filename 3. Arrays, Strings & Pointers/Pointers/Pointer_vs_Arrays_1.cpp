#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int arr[] = {10, 20, 30};

    int *p1 = arr;

    int (*p2)[3] = &arr;

    cout << *p1 << " " << p1 << "\n"\
         << *p2 ;
}