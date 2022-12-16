#include<bits/stdc++.h>
using namespace std;

// Using Template smart Pointer will results in using any datatype with it be it
// basic datatypes(int) or user defined datatypes (test,complex)
// It is a smart pointer for all Classes.

template <class T>

class smartPointer {
	T *ptr; // T type pointer.
public:
	smartPointer(T *p = NULL) {ptr = p;}
	~smartPointer() {delete ptr;}

	T &operator *() {return *ptr;}
	T *operator ->() {return ptr;}
};


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	smartPointer <int> sp(new int()); // Creating int type of Pointer
	*sp = 20;
	cout << *sp << endl;

	smartPointer <float> P(new float()); // Creating float type pointer.
	*P = 42.789;
	cout << *P;
	return 0;



}